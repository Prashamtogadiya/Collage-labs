import java.util.Scanner;

class Use{
    static int count=0;
    public static void displayCount(int count){
        System.out.println("Value of count : "+count);
    }
}

public class StaticUse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of count : ");
        Use.count = sc.nextInt();
        sc.close();
        Use.displayCount(Use.count);
    }
}
