import java.util.*;

public class BST {

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

    public Node constTree(int[] arr) {
        Node root = null;
        for (int i = 0; i < arr.length; i++) {
            root = insertNode(root, arr[i]);
        }
        return root;
    }

    public Node insertNode(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }
        if (val < root.val) {
            root.left = insertNode(root.left, val);
        } else {
            root.right = insertNode(root.right, val);
        }
        return root;
    }

    public boolean search(Node root, int n) {
        if (root == null) {
            return false;
        }
        if (n == root.val) {
            return true;
        } else if (n > root.val) {
            return search(root.right, n);
        } else {
            return search(root.left, n);
        }
    }

    public Node delete(Node root, int n) {
        if (root.val > n) {
            root.left = delete(root.left, n);
        } else if (root.val < n) {
            root.right = delete(root.right, n);
        } else {
            if (root.left == null && root.right == null) {
                return null;
            } else if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            } else {
                Node replaceNode = root.right;
                while (replaceNode.left!=null) {
                    replaceNode = replaceNode.left;
                }
                root.val = replaceNode.val;
                root.right = delete(root.right, replaceNode.val);
            }
        }
        return root;
    }

    public Node createHeap(int[] arr, int i) {
        Node root = null;
        if (i < arr.length) {
            root = new Node(arr[i]);
            root.left = createHeap(arr, i*2 + 1);
            root.right = createHeap(arr, i*2 + 2);
        }
        return root;
    }

    public boolean isSymmetric(Node root) {
        if (root==null) {
            return false;
        }

        return checkSymmetric(root.left, root.right);
    }

    public boolean checkSymmetric(Node root1, Node root2) {
        if(root1==null && root2==null) {
            return true;
        }
        if(root1==null || root2==null) {
            return false;
        }
        if(root1.val != root2.val) {
            return false;
        }
        return checkSymmetric(root1.left, root2.right) && checkSymmetric(root1.right, root2.left);
    } 

    public void printPreorder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.val + " ");
        printPreorder(root.left);
        printPreorder(root.right);
    }

    public void printInorder(Node root) {
        if (root == null) {
            return;
        }
        printInorder(root.left);
        System.out.print(root.val + " ");
        printInorder(root.right);
    }

    public void printPostorder(Node root) {
        if (root == null) {
            return;
        }
        printPostorder(root.left);
        printPostorder(root.right);
        System.out.print(root.val + " ");
    }

    public void printLevelOrder(Node root) {
        if (root == null) {
            return;
        }
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);
        queue.add(null);

        while (!queue.isEmpty()) {
            Node currNode = queue.remove();
            if (currNode == null) {
                System.out.println();
                if (queue.isEmpty())
                    break;
                else
                    queue.add(null);
            } else {
                System.out.print(currNode.val + " ");
                if (currNode.left != null)
                    queue.add(currNode.left);
                if (currNode.right != null)
                    queue.add(currNode.right);
            }
        }
    }

    public boolean equals(Node t1, Node t2) {
        if (t1==null && t2==null) {
            return true;
        }
        if (t1==null || t2==null) {
            return false;
        }
        if (t1.val!=t2.val) {
            return false;
        }
        return equals(t1.left, t2.left) && equals(t1.right, t2.right);
    }
}