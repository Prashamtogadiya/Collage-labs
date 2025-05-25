import java.util.Scanner;

class LinkedList<T> {
    Node head;
    Node tail;
    int size;
    Node curSong;

    public LinkedList() {
        head = null;
        tail = null;
        size = 0;
        curSong = null;
    }

    public LinkedList(T val) {
        this.head = this.tail = this.curSong = new Node(val);
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

    public void addInPlayList(T val) {
        Node newNode = new Node(val);
        if (isEmpty()) {
            head = tail = newNode;
            return;
        }
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
    }

    public void goPrevious() {
        if (curSong == head) {
            System.out.println("No previous song available.");
            return;
        }
        curSong = curSong.prev;
        System.out.println("\nPlaying " + curSong.val);
    }

    public void goNext() {
        if (curSong == tail) {
            System.out.println("No next song available.");
            return;
        }
        curSong = curSong.next;
        System.out.println("\nPlaying " + curSong.val);
    }

    public void currentSong() {
        if (curSong == null) {
            System.out.println("\nNo song is playing.");
            return;
        }
        System.out.println("Playing " + curSong.val);
    }

    public void playSong(T val) {
        if (isEmpty()) {
            System.out.println("\nPlaylist is empty");
            return;
        }
        Node curNode = head;
        while (curNode!=null && curNode.equals(val)) {
            curNode = curNode.next;
        }
        if (curNode==null) {
            System.out.println("Song not found.");
            return;
        }
        curSong = curNode;
        System.out.println("Playing "+val);
    }

    public void insertAt(T val, int ind) {
        Node newNode = new Node(val);

        if (ind == 1) {
            addInPlayList(val);
            return;
        }
        Node curNode = head;
        int curInd = 1;

        while (curNode != null && curInd < ind) {
            curNode = curNode.next;
            curInd++;
        }
        if (curNode == null) {
            addInPlayList(val);
            return;
        }
        newNode.prev = curNode.prev;
        curNode.prev.next = newNode;
        newNode.next = curNode;
        curNode.prev = newNode;

        System.out.println("Song added.");
    }

    public void remove(T val) {
        if (isEmpty()) {
            System.out.println("Playlist is empty.");
            return;
        }
        if (head.val == val) {
            head = head.next;
            head.prev = null;
            size--;
            return;
        }
        Node curNode = head.next;
        while (curNode != null && !curNode.val.equals(val)) {
            curNode = curNode.next;
        }
        if (curNode == null) {
            System.out.println("Song not found");
            return;
        }
        if (curSong==curNode) {
            curSong=null;
        }
        curNode.prev.next = curNode.next;
        size--;
        System.out.println("Song removed.");
    }

    public void showPlaylist() {
        if (isEmpty()) {
            System.out.println("\nPlaylist is empty");
            return;
        }
        Node curNode = head;
        int i = 1;
        System.out.println("\nAvailable songs in playlist.");
        while (curNode != null) {
            System.out.println(i + ".) " + curNode.val);
            curNode = curNode.next;
            i++;
        }
    }

}

public class MusicPlayer {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<>();
        Scanner sc = new Scanner(System.in);

        boolean exit = false;
        while (!exit) {
            System.out.println("\n1. Add new song");
            System.out.println("2. Play song");
            System.out.println("3. Previous song");
            System.out.println("4. Next song");
            System.out.println("5. Current song");
            System.out.println("6. Show playlist");
            System.out.println("7. Add song at");
            System.out.println("8. Remove song");
            System.out.println("9. Exit");
            System.out.print("\nEnter your choice : ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter song name : ");
                    list.addInPlayList(sc.next());
                    break;

                case 2:
                    System.out.print("Enter song name : ");
                    list.playSong(sc.next());
                    break;

                case 3:
                    list.goPrevious();
                    break;

                case 4:
                    list.goNext();
                    break;

                case 5:
                    list.currentSong();
                    break;

                case 6:
                    list.showPlaylist();
                    break;

                case 7:
                    System.out.print("Enter song name : ");
                    String name = sc.next();
                    System.out.print("Enter position : ");
                    int position = sc.nextInt();
                    list.insertAt(name, position);
                    break;

                case 8:
                    System.out.print("Enter song name to delete : ");
                    list.remove(sc.next());
                    break;

                case 9:
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