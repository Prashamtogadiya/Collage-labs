import java.util.Scanner;

public class PrePost {
    static class Node {
        int val;
        Node left;
        Node right;
        Node root;

        public Node(int val) {
            this.val = val;
            left = null;
            right = null;
            root = null;
        }
    }

    static int preIndex = 0;
    static int postIndex = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of the array: ");
        int size = sc.nextInt();
        int[] pre = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("Enter pre[" + i + "]: ");
            pre[i] = sc.nextInt();
        }
        System.out.println();
        int[] post = new int[size];
        for (int i = 0; i < size; i++) {
            System.out.print("Enter post[" + i + "]: ");
            post[i] = sc.nextInt();
        }

        Node root = createFromPrePost(pre, post);

        System.out.print("\nIndorder: ");
        printInorder(root);
        System.out.print("\nPreorder: ");
        printPreorder(root);
        System.out.print("\npostorder: ");
        printPostorder(root);

        sc.close();
    }

    public static Node createFromPrePost(int[] pre, int[] post) {
        if (preIndex >= pre.length || postIndex >= post.length) {
            return null;
        }

        Node root = new Node(pre[preIndex++]);

        if (root.val != post[postIndex]) {
            root.left = createFromPrePost(pre, post);
        }

        if (root.val != post[postIndex]) {
            root.right = createFromPrePost(pre, post);
        }

        postIndex++;

        return root;
    }

    
    public static void printPreorder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.val + " ");
        printPreorder(root.left);
        printPreorder(root.right);
    }

    public static void printInorder(Node root) {
        if (root == null) {
            return;
        }
        printInorder(root.left);
        System.out.print(root.val + " ");
        printInorder(root.right);
    }

    public static void printPostorder(Node root) {
        if (root == null) {
            return;
        }
        printPostorder(root.left);
        printPostorder(root.right);
        System.out.print(root.val + " ");
    }

}
