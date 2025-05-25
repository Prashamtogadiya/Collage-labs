import java.util.Scanner;
public class Prime{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        sc.close();
        int flag=0;
        for(int i=2; i<n; i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            System.out.println("Number is prime.");
        }
        else{
            System.out.println("Number is not prime.");
        }
    }
}