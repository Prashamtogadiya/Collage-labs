import java.util.Scanner;

public class Max{
    public static void main(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number1 : ");
        int a = sc.nextInt();
        System.out.print("Enter number2 : ");
        int b = sc.nextInt();
        System.out.print("Enter number3 : ");
        int c = sc.nextInt();
        sc.close();
        if(a>b){
            if(a>c){
                System.out.println(a + "is greatest");
            }
            else{
                System.out.println(c + "is greatest");
            }
        }
        else{
            if(b>c){
                System.out.println(b + "is greatest");
            }
            else{
                System.out.println(c + "is greatest");
            }
        }
    }
}