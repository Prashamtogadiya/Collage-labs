import java.util.Scanner;

public class CircularLinkedList<T> {
    Node first, last;
    int size = 0;

    class Node {
        T val;
        Node next;

        public Node(T val) {
            this.val = val;
            this.next = null;
            size++;
        }
    }

    public CircularLinkedList() {
        first = last = null;
    }

    public CircularLinkedList(T val) {
        first = last = new Node(val);
    }

    public void insertFirst(T val) {
        Node newNode = new Node(val);
        if (first == null) {
            first = newNode;
            last = newNode;
            last.next = first;
            return;
        }
        newNode.next = first;
        last.next = newNode;
        first = newNode;
    }

    public void insertLast(T val) {
        Node newNode = new Node(val);
        if (first == null) {
            first=last=newNode;
            return;
        }
        last.next = newNode;
        newNode.next = first;
        last = newNode;
    }

    public void remove(T val) {
        if (first == null) {
            System.out.println("List is empty.");
            return;
        }
        if (first.val == val) {
            first = first.next;
            last.next = first;
            size--;
            return;
        }
        Node prevNode = first.next;
        while (prevNode.next != last && prevNode.next.val != val) {
            prevNode = prevNode.next;
        }
        if (prevNode == last) {
            System.out.println("Number not found");
            return;
        }
        size--;
        if (prevNode.next == last) {
            last = prevNode;
            prevNode.next = first;
            return;
        }
        prevNode.next = prevNode.next.next;
    }

    public void print() {
        if (first == null) {
            System.out.println("LinkedList is empty.");
            return;
        }
        System.out.print("List : { ");
        Node curNode = first;
        do {
            System.out.print(curNode.val + " ");
            curNode = curNode.next;
        } while (curNode != first);
        System.out.println("}");
    }

    public void splitHalves() {
        Node slow = first, fast = first;
        while (fast.next.next!=first && fast.next!=first) {
            slow = slow.next;
            fast = fast.next.next;
        }
        Node first2 = slow.next;
        slow.next = first;
        last.next = first2;

        // first half
        System.out.print("List : { ");
        Node curNode = first;
        do {
            System.out.print(curNode.val + " ");
            curNode = curNode.next;
        } while (curNode != first);
        System.out.println("}");

        // second half
        System.out.print("List : { ");
        curNode = first2;
        do {
            System.out.print(curNode.val + " ");
            curNode = curNode.next;
        } while (curNode != first2);
        System.out.println("}");
    }

    public int size() {
        return size;
    }

    public static void main(String[] args) {
        CircularLinkedList<Integer> list = new CircularLinkedList<>();
        Scanner sc = new Scanner(System.in);
        int val;
        boolean check = true;
        while (check) {
            System.out.println("\n[1] Insert at first\n[2] Insert at last\n[3] Remove\n[4] Print\n[5] Size\n[6] Split half\n[7] Exit");
            System.out.print("\nEnter your choice : ");
            int choice = sc.nextInt();
            switch (choice) {
                case 1 -> {
                    System.out.print("Enter val : ");
                    val = sc.nextInt();
                    list.insertFirst(val);
                }

                case 2 -> {
                    System.out.print("Enter val : ");
                    val = sc.nextInt();
                    list.insertLast(val);
                }

                case 3 -> {
                    System.out.print("Enter number to remove : ");
                    val = sc.nextInt();
                    list.remove(val);
                }

                case 4 -> list.print();

                case 5 -> System.out.println("Size : " + list.size());

                case 6 -> list.splitHalves();

                case 7 -> check = false;
            }
        }
        sc.close();
    }
}