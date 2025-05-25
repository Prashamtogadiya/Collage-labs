import java.util.Scanner;

public class RadixSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[5];
        System.out.println("Enter five elements");
        for (int i = 0; i < 5; i++) {
            System.out.print("arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        System.out.print("Unsorted : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        RadixSort.radixSort(arr);

        System.out.print("\nSorted : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }

    public static void radixSort(int arr[]) {
        int max = getMax(arr);

        for (int divide = 1; max / divide > 0; divide *= 10) {
            countSort(arr, divide);
        }
    }

    public static void countSort(int[] arr, int divide) {
        int count[] = new int[10];
        for (int i = 0; i < arr.length; i++) {
            count[(arr[i]/divide)%10]++;
        }
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        int[] newArray = new int[arr.length];
        for (int i = arr.length - 1; i >= 0; i--) {
            int digit = (arr[i] / divide) % 10;
            newArray[count[digit] - 1] = arr[i];
            count[digit]--;
        }
        System.arraycopy(newArray, 0, arr, 0, arr.length);
    }

    public static int getMax(int[] arr) {
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }
}
