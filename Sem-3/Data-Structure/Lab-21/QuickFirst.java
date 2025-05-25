import java.util.Scanner;

public class QuickFirst {
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

    private static int partition(int[] arr, int lb, int ub) {
        int pivot = arr[lb];
        int i = lb, j = ub + 1;

        while (i < j) {
            do {
                i++;
            } while (i <= ub && arr[i] < pivot);
            do {
                j--;
            } while (j >= lb && arr[j] > pivot);

            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[j];
        arr[j] = arr[lb];
        arr[lb] = temp;

        return j;
    }
}
