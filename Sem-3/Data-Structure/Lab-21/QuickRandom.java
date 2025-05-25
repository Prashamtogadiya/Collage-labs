import java.util.Random;
import java.util.Scanner;

public class QuickRandom {
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

        quicksort(arr, 0, arr.length - 1);

        System.out.print("\nSorted : ");
        print(arr);
        sc.close();
    }

    public static void quicksort(int[] arr, int lb, int ub) {
        if (lb<ub) {
            int pivotind = partition(arr, ub, lb);

            quicksort(arr, lb, pivotind-1);
            quicksort(arr, pivotind+1, ub);
        }
    }

    public static int partition(int[] arr, int ub, int lb) {
        Random random = new Random();
        int pivotind = lb + random.nextInt(lb + ub - 1);

        swap(arr, pivotind, ub);

        int pivot = arr[ub];
        int i = lb-1;

        for (int j = lb; j < ub; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        i++;
        swap(arr, i, ub);

        return i;
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
