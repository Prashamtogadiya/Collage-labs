import java.util.Scanner;

public class Traversal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BST t = new BST();
        System.out.print("Enter length of array : ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("a[" + i + "] : ");
            arr[i] = sc.nextInt();
        }
        BST.Node root = t.constTree(arr);

        boolean exit = false;
        while (!exit) {
            System.out.println("\n\n[1] Print Preorder");
            System.out.println("[2] Print Postorder");
            System.out.println("[1] Print Inorder");
            System.out.println("[4] exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("\nPreorder: ");
                    t.printPreorder(root);
                    break;
                    
                case 2:
                    System.out.print("\nPostorder: ");
                    t.printPostorder(root);
                    break;
                    
                case 3:
                    System.out.print("\nInorder: ");
                    t.printInorder(root);
                    break;

                case 4:
                    exit = true;
                    break;

                default:
                    System.out.println("\nEnter valid choice.");
                    break;
            }
        }
        sc.close();
    }
}
