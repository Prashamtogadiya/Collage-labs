import java.util.Scanner;

public class Symmetric {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BST t = new BST();
        System.out.print("Enter length of array : ");
        int size = sc.nextInt();
        int[] arr1 = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("arr1[" + i + "] : ");
            arr1[i] = sc.nextInt();
        }
        
        BST.Node root = t.createHeap(arr1, 0);

        if (t.isSymmetric(root)) {
            System.out.println("Constructed tree is symmetric.");
        }
        else {
            System.out.println("Constructed tree is not symmetric.");
        }
        sc.close();
    }
}
