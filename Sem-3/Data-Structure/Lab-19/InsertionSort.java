import java.util.Scanner;

public class InsertionSort {
    static int a[] = new int[5];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter five elements");
        for (int i = 0; i < 5; i++) {
            System.out.print("a[" + i + "] : ");
            a[i] = sc.nextInt();
        }
        System.out.print("Unsorted : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
        InsertionSort.selectionSort(a);
        System.out.print("\nSorted : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
        sc.close();
    }

    public static void selectionSort(int a[]) {
        for (int i = 1; i < a.length; i++) {
            int key = a[i];
            int j=i-1;
            while (j>=0 && a[j]>key) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = key;
        }
    }
}
