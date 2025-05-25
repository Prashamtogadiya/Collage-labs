import java.util.Scanner;

public class SmallestLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("Enter arr["+i+"]: ");
            arr[i] = sc.nextInt();
        }

        BST t = new BST();
        BST.Node rootForSmallest = t.constTree(arr);
        BST.Node rootForLargest = rootForSmallest;

        // find smallest
        int min = rootForSmallest.val;
        while (rootForSmallest.left!=null) {
            rootForSmallest = rootForSmallest.left;
            min = rootForSmallest.val;
        }

        // find largest
        int max = rootForLargest.val;
        while (rootForLargest.right!=null) {
            rootForLargest = rootForLargest.right;
            max = rootForLargest.val;
        }

        System.out.println("Smallest: "+min);
        System.out.println("Largest: "+max);
        sc.close();
    }
}
