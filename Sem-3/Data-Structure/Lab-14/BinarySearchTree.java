import java.util.Scanner;

public class BinarySearchTree {
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
            System.out.println("\n[1] Insert");
            System.out.println("[2] Delete");
            System.out.println("[3] Search");
            System.out.println("[4] exit");
            System.out.print("Enter your choice: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                System.out.print("\nInsert new node: ");
                int ni = sc.nextInt();
                t.insertNode(root, ni);
                System.out.println("Node added.");
                break;
                
                case 2:
                System.out.print("\nDelete node: ");
                int nd = sc.nextInt();
                    if (t.search(root, nd)) {
                        t.delete(root, nd);
                        System.out.println("Node deleted");
                    }
                    else {
                        System.out.println("Not found.");
                    }
                    break;

                    case 3:
                        System.out.print("\nSearch node: ");
                        int ns = sc.nextInt();
                        if (t.search(root, ns))
                            System.out.println("Found");
                        else
                            System.out.println("Not found.");
                        break;
                    
                case 4:
                    exit = true;
                    break;

                default:
                    System.out.println("Enter valid choice.");
                    break;
            }
        }

        sc.close();
    }
}
