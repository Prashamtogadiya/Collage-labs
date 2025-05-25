import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        System.out.println("Enter five elements");
        for (int i = 0; i < 5; i++) {
            System.out.print("a[" + i + "] : ");
            a[i] = sc.nextInt();
        }
        System.out.print("Enter element to search : ");
        int target = sc.nextInt();

        System.out.println("Element is at index " + binarySearch(a, target));
        sc.close();
    }

    public static int binarySearch(int[] a, int target) {
        int left = 0, right = a.length-1;
        while (left<=right) {
            int mid = (left+right)/2;
            if (a[mid]==target) return mid;
            else if (target>a[mid]) left = mid +1;
            else right = mid-1;
        }
        return -1;
    }
}
