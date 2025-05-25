import java.util.Scanner;

public class SelectionSort {
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
        SelectionSort.selectionSort(a);
        System.out.print("\nSorted : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
        sc.close();
    }
    public static void selectionSort(int a[]) {
        for (int i = 0; i < a.length-1; i++) {
            int minIndex = i, minElement = a[i];
            for (int j = i+1; j < a.length; j++) {
                if (minElement>a[j]) {
                    minElement = a[j];
                    minIndex = j;
                }
            }
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}
