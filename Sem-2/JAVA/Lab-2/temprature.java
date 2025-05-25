import java.util.Scanner;

public class temprature {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter temprature in F : ");   
        float f = sc.nextFloat();
        float c = f-32*5f/9f;
        System.out.println(f+"F = "+c+"c");
        sc.close();
    }
}
