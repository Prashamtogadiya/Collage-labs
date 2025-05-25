public class Compare {
    public static void main(String[] args) {
        MyLinkedList<Integer> list1 = new MyLinkedList<>();
        MyLinkedList<Integer> list2 = new MyLinkedList<>();

        for(int i=0; i<5; i++) {
            list1.insertFirst(i);
            list2.insertFirst(i);
        }

        System.out.print("list1 : ");
        list1.print();
        System.out.print("list2 : ");
        list2.print();
        list1.compareTo(list2);

        list2.insertLast(10);

        System.out.print("list1 : ");
        list1.print();
        System.out.print("list2 : ");
        list2.print();
        list1.compareTo(list2);
    }
}
