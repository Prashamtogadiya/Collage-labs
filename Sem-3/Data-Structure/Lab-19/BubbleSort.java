import java.util.Scanner;

public class BubbleSort {
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
        BubbleSort.bubbleSort(a);
        System.out.print("\nSorted : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }

        sc.close();
    }

    public static void bubbleSort(int[] a) {
        for (int i = 0; i < a.length-1; i++) {
            for (int j = 0; j < a.length-i-1; j++) {
                if (a[j]>a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }
}
