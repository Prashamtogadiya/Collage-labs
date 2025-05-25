import java.util.Scanner;

public class MyLinkedList<T> {

    Node head;
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

    public MyLinkedList() {
        head = null;
    }

    public MyLinkedList(T val) {
        head = new Node(val);
    }

    public boolean isEmpty() {
        return head == null;
    }

    public int size() {
        return size;
    }

    public void insertFirst(T val) {
        Node newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    public void insertLast(T val) {
        Node newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            return;
        }
        Node curNode = head;
        while (curNode.next != null) {
            curNode = curNode.next;
        }
        curNode.next = newNode;
    }

    public void insertAt(int ind, T val) {
        Node newNode = new Node(val);
        int len = this.size();
        if (ind>len) {
            System.out.println("Can't access index");
            return;
        }
        if (ind==0) {
            head = newNode;
            return;
        }

        Node curNode = head;
        for(int i=0; i<ind-1; i++) {
            curNode = curNode.next;
        }
        curNode.next = newNode;
        newNode.next = curNode.next.next;
    }

    public void remove(T val) {
        if (isEmpty()) {
            System.out.println("LinkedList is empty");
            return;
        }
        if (head.val == val) {
            head = head.next;
            size--;
            return;
        }
        Node prevNode = head;
        while (prevNode.next != null && prevNode.next.val != val) {
            prevNode = prevNode.next;
        }
        if (prevNode.next == null) {
            System.out.println("Number not found");
            return;
        }
        prevNode.next = prevNode.next.next;
        size--;
        System.out.println("Number deleted");
    }

    public void print() {
        Node curNode = head;
        System.out.print("{ ");
        while (curNode != null) {
            System.out.print(curNode.val + " ");
            curNode = curNode.next;
        }
        System.out.println("}");
    }

    public void reverse() {
        if (isEmpty()) {
            System.out.println("List is null");
            return;
        }
        Node prevNode = null, curNode = head, nxtNode = null;
        while (curNode != null) {
            nxtNode = curNode.next;
            curNode.next = prevNode;
            prevNode = curNode;
            curNode = nxtNode;
        }
        head = prevNode;
        System.out.println("List reversed");
    }

    public void compareTo(MyLinkedList<T> list2) {
        if (this.size() != list2.size()) {
            System.out.println("Both Linked List are not same");
            return;
        }
        Node curNode1 = this.head;
        Node curNode2 = list2.head;

        while (curNode1 != null && curNode2 != null) {
            if (curNode1.val != curNode2.val) {
                System.out.println("Both Linked List are not same");
                return;
            }
            curNode1 = curNode1.next;
            curNode2 = curNode2.next;
        }

        System.out.println("Both LinkedList are same");
    }

    public void removeDuplicates() {
        if (head == null)
            return;

        Node curNode = head;
        while (curNode != null) {
            Node checkNode = curNode;
            while (checkNode.next != null) {
                if (checkNode.next.val == curNode.val) {
                    checkNode.next = checkNode.next.next;
                } else {
                    checkNode = checkNode.next;
                }
            }
            curNode = curNode.next;
        }
    }

    public MyLinkedList<T> cloneList() {
        MyLinkedList<T> copiedList = new MyLinkedList<>();

        if (isEmpty()) {
            return copiedList;
        }

        copiedList.head = new Node(head.val);
        Node thisNode = head.next;

        while (thisNode != null) {
            copiedList.insertLast(thisNode.val);
            thisNode = thisNode.next;
        }

        return copiedList;
    }

    public void swap(int k) {
        if (isEmpty()) {
            System.out.println("List is empty");
            return;
        }
        if (head.next==null) {
            return;
        }
        int len = this.size();
        Node curNode = head;
        Node kFNode = null, kLNode = null;
        for (int i = 0; i < len; i++) {
            if (i == k - 1) {
                kFNode = curNode;
            }
            if (i == len - k) {
                kLNode = curNode;
            }
            curNode = curNode.next;
        }
        T temp = kFNode.val;
        kFNode.val = kLNode.val;
        kLNode.val = temp;
    }
    
    public static void main(String[] args) {
        MyLinkedList<Integer> list = new MyLinkedList<>();
        Scanner sc = new Scanner(System.in);
        int val;
        boolean check = true;
        while (check) {
            System.out.println(
                    "\n[1] Insert at first\n[2] Insert at last\n[3] Remove\n[4] Reverse\n[5] Print\n[6] Size\n[7] Exit");
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

                case 4 -> list.reverse();

                case 5 -> list.print();

                case 6 -> System.out.println("Size : " + list.size());

                case 7 -> check = false;
            }
        }
        sc.close();
    }
}