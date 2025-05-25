import java.util.Scanner;
public class sum {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        System.out.println("Commandline sum is : "+(a+b));

        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Scanner sum is : "+(a+b));
        sc.close();
    }    
}
