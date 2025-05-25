import java.util.Scanner;

public class CountSort {
    public static void main(String[] args) {
        int a[] = new int[5];
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
        CountSort.countSort(a);
        System.out.print("\nSorted : ");
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
        sc.close();
    }
    public static void countSort(int[] a) {
        int max = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i]>max) {
                max = a[i];
            }
        }
        int count[] = new int[max+1];
        for (int i = 0; i < a.length; i++) {
            count[a[i]]++;
        }
        for (int i = 1; i < count.length; i++) {
            count[i] += count[i-1];
        }
        int[] newArray = new int[a.length];
        for (int i = a.length-1; i >= 0; i--) {
            newArray[count[a[i]] - 1] = a[i];
            count[a[i]]--;
        }
        System.arraycopy(newArray, 0, a, 0, a.length);
    }
}