public class DoublyLinkedList<T> {
    Node head;
    Node tail;
    int size;

    public DoublyLinkedList() {
        head = null;
        tail = null;
        size = 0;
    }

    public DoublyLinkedList(T val) {
        this.head = new Node(val);
        this.tail = new Node(val);
        head.next = tail;
        tail.prev = head;
        size = 1;
    }

    class Node {
        T val;
        Node prev;
        Node next;

        public Node(T val) {
            this.val = val;
            this.prev = null;
            this.next = null;
            size++;
        }
    }

    public boolean isEmpty() {
        return head == null;
    }

    public int size() {
        return size;
    }

    public void addFirst(T val) {
        Node newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
    }

    public void addLast(T val) {
        Node newNode = new Node(val);
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
            head.next = tail;
            tail.prev = head;
            return;
        }
        Node curNode = head;
        while (curNode.next != null) {
            curNode = curNode.next;
        }
        curNode.next = newNode;
        newNode.prev = curNode;
    }

    public void insertAt(T val, int ind) {
        Node newNode = new Node(val);

        if (ind == 1) {
            addFirst(val);
            return;
        }
        Node curNode = head;
        int curInd = 1;

        while (curNode != null && curInd < ind) {
            curNode = curNode.next;
            curInd++;
        }
        if (curNode == null) {
            addLast(val);
            return;
        }
        newNode.prev = curNode.prev;
        curNode.prev.next = newNode;
        newNode.next = curNode;
        curNode.prev = newNode;
    }

    public void remove(T val) {
        if (isEmpty()) {
            System.out.println("LinkedList is empty.");
            return;
        }
        if (head.val == val) {
            head = head.next;
            head.prev = null;
            size--;
            return;
        }
        Node curNode = head.next;
        while (curNode != null && curNode.val != val) {
            curNode = curNode.next;
        }
        if (curNode == null) {
            System.out.println("val not found");
            return;
        }
        curNode.prev.next = curNode.next;
        size--;
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
            head = head.next;
            head.prev = null;
            size--;
            return;
        }
        Node curNode = head;
        while (ind-->0 && curNode.next!=null) {
            curNode = curNode.next;
        }
        if (curNode.next==null) {
            System.out.println("Index not foun");
            return;
        }
        curNode.next = curNode.next.next;
        curNode.next.prev = curNode; 
        System.out.println("Node removed SucessFully");
        size--;
    }

    public void printList() {
        if (isEmpty()) {
            System.out.println("{}");
            return;
        }
        Node curNode = head;
        System.out.print("{");
        while (curNode!=null) {
            System.out.print(curNode.val+" ");
            curNode = curNode.next;
        }
        System.out.println("}");
    }

    public void deleteAlternate() {
        if (isEmpty()) {
            System.out.println("List is empty");
            return;
        }

        Node curNode = head.next;
        while (curNode.next!=null && curNode.next.next!=null) {
            curNode.next = curNode.next.next;
            curNode.next.prev = curNode;
            curNode = curNode.next;
        }
    }

    public static void main(String[] args) {
        DoublyLinkedList<Integer> dList = new DoublyLinkedList<>();

        System.out.println("Hello");

        dList.addFirst(5);
        dList.addFirst(4);
        dList.addFirst(3);
        dList.addFirst(2);
        dList.addFirst(1);
        dList.addFirst(0);

        dList.printList();
        System.out.println("Delete alternate : ");
        dList.deleteAlternate();
        dList.printList();

        // System.out.println("Size : "+dList.size());

        // dList.printList();

        // System.out.println("Remove 1 ");
        // dList.remove(1);
        // dList.printList();
        // System.out.println("Remove 2 ");
        // dList.remove(2);
        // dList.printList();
        // System.out.println("Remove 3 ");
        // dList.remove(3);
        // dList.printList();
    }
}
