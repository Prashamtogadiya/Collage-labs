import java.util.Scanner;

public class ShellSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("arr[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        System.out.print("Unsorted : ");
        print(arr);

        shellSort(arr);

        System.out.print("\nSorted : ");
        print(arr);
        sc.close();        
    }

    public static void shellSort(int[] arr) {
        int n = arr.length;
        for(int gap=n/2; gap>0; gap/=2) {
            for (int j = gap; j < arr.length; j++) {
                for (int i = j-gap; i >= 0; i-=gap) {
                    if (arr[i+gap] < arr[i]) {
                        swap(arr, i+gap, i);
                    }
                }
            }
        }
    }

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
