import java.util.Scanner;

class Book {
    private String authorName;

    public Book(String authorName) {
        this.authorName = authorName;
    }

    public void displayPublication() {
        System.out.println("Author : " + authorName);
    }
}

class BookPublication extends Book {
    private String title;

    public BookPublication(String authorName, String title) {
        super(authorName);
        this.title = title;
    }

    @Override
    public void displayPublication() {
        super.displayPublication();
        System.out.println("Book Title : " + title);
    }
}

class PaperPublication extends Book {
    private String title;

    public PaperPublication(String authorName, String title) {
        super(authorName);
        this.title = title;
    }

    @Override
    public void displayPublication() {
        System.out.println("Paper Title : " + title);
    }
}

public class BookDetails{
    public static void main(String[] args) {

        String authorName = args[0];
        String bookTitle = args[1];
        String paperTitle = args[2];
        String choice;

        BookPublication book = new BookPublication(authorName, bookTitle);
        PaperPublication paper = new PaperPublication(authorName, paperTitle);
        Book ref;
        System.out.print("Enter book or paper : ");
        Scanner sc = new Scanner(System.in);
        choice = sc.next();
        if(choice.equals("book")){
            ref = book;
        }
        else{
            ref = paper;
        }
        ref.displayPublication();
        sc.close();
    }
}
