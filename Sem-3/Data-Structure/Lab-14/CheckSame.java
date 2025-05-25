import java.util.Scanner;

public class CheckSame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BST t = new BST();
        System.out.print("Enter length of array1 : ");
        int size = sc.nextInt();
        int[] arr1 = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("arr1[" + i + "] : ");
            arr1[i] = sc.nextInt();
        }
        BST.Node root1 = t.constTree(arr1);

        System.out.print("\nEnter length of array2 : ");
        size = sc.nextInt();
        int[] arr2 = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("arr2[" + i + "] : ");
            arr2[i] = sc.nextInt();
        }
        BST.Node root2 = t.constTree(arr2);

        if (t.equals(root1, root2)) {
            System.out.println("\nBoth trees are same.");
        }
        else {
            System.out.println("\nBoth trees are not same.");
        }

        sc.close();
    }
}
