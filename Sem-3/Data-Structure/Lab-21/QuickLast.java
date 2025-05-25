import java.util.Scanner;

public class QuickLast {
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
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

        quicksort(arr, 0, arr.length - 1);

        System.out.print("\nSorted : ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }

    public static void quicksort(int[] arr, int lb, int ub) {
        if (lb < ub) {
            int pivotind = partition(arr, lb, ub);

            quicksort(arr, lb, pivotind - 1);
            quicksort(arr, pivotind + 1, ub);
        }
    }

    public static int partition(int[] arr, int lb, int ub) {
        int pivot = arr[ub];
        int i = lb - 1;

        for (int j = lb; j < ub; j++) {
            if (arr[j] < pivot) {
                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[ub] = temp;

        return i;
    }

}
