import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        System.out.println("Enter five elements");           
        for (int i = 0; i < 5; i++) {
            System.out.print("a["+i+"] : ");
            a[i] = sc.nextInt();
        }
        System.out.print("Enter element to search : ");
        int target = sc.nextInt();

        System.out.println("Element is at index "+linearSearch(a, target));
        sc.close();
    }

    public static int linearSearch(int[] a, int target) {
        for (int i = 0; i < a.length; i++) {
            if (a[i]==target) {
                return i;
            }
        }
        return -1;
    }
}
