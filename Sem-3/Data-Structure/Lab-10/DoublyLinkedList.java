import java.util.LinkedList;
import java.util.Scanner;

public class DoublyLinkedList<T> {
    public Node head;
    public Node tail;
    int size=0;

    public DoublyLinkedList() {
        this.head = null;
        this.tail = null;
    }

    class Node {
        T val;
        Node lptr;
        Node rptr;

        Node(T val) {
            this.val = val;
            this.lptr = null;
            this.rptr = null;
            size++;
        }
    }

    public void insertFirst(T val) {
        Node newNode = new Node(val);

        if (head == null) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode.rptr = head;
        head.lptr = newNode;
        head = newNode;
    }

    public void insertLast(T val) {
        Node newNode = new Node(val);

        newNode.val = val;
        if (tail == null) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail.rptr = newNode;
        newNode.lptr = tail;
        tail = newNode;
    }

    public void insertAtPosition(T val, int ind) {
        Node newNode = new Node(val);

        if (ind == 1) {
            insertFirst(val);
            return;
        }
        Node curNode = head;
        int curInd = 1;

        while (curNode != null && curInd < ind) {
            curNode = curNode.rptr;
            curInd++;
        }
        if (curNode == null) {
            insertLast(val);
            return;
        }
        newNode.lptr = curNode.lptr;
        curNode.lptr.rptr = newNode;
        newNode.rptr = curNode;
        curNode.lptr = newNode;
    }

    public void remove(int ind) {
        if (tail == null) {
            System.out.println("Under-Flow");
            return;
        }
        if (head == tail) {
            head = tail = null;
            return;
        }
        if (ind == 1) {
            head = head.rptr;
            head.lptr = null;
            size--;
            return;
        }
        Node curNode = head;
        while (ind-->0 && curNode.rptr!=null) {
            curNode = curNode.rptr;
        }
        if (curNode.rptr==null) {
            System.out.println("Index not foun");
            return;
        }
        curNode.rptr = curNode.rptr.rptr;
        curNode.rptr.lptr = curNode; 
        System.out.println("Node removed SucessFully");
        size--;
    }

    public void print() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.val + " -> ");
            temp = temp.rptr;
        }
        System.out.println();
    }

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return head==null;
    }

    

    public static void main(String[] args) {
        DoublyLinkedList<Integer> l1 = new DoublyLinkedList<>();
        Scanner sc = new Scanner(System.in);
        int val;
        boolean check = true;
        while (check) {
            System.out.println("\n[1] Insert at first\n[2] Insert at last\n[3] Remove\n[5] Print\n[6] Size\n[7] Exit");
            System.out.print("\nEnter your choice : ");
            int choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter an element : ");
                    val = sc.nextInt();
                    l1.insertFirst(val);
                    break;
                case 2:
                    System.out.println("Enter an element : ");
                    val = sc.nextInt();
                    l1.insertLast(val);
                    break;
                case 3:
                    System.out.println("Enter an element : ");
                    val = sc.nextInt();
                    System.out.println("Enter an ind ");
                    int val1 = sc.nextInt();
                    l1.insertAtPosition(val, val1);
                    break;
                case 4:
                    System.out.println("Enter a ind : ");
                    val = sc.nextInt();
                    l1.remove(val);
                    break;
                case 5:
                    l1.print();
                    break;
                case 6:
                    check = false;
                    break;
                default:
                    System.out.println("Invalid choice");
            }
            sc.close();

            LinkedList<Integer> list = new LinkedList<>();
        }
    }
}