import java.util.Scanner;

class Bank_Account{
    int accountNo;
    String userName;
    String email;
    String accountType; 
    int accountBalance;

    public void getAccountDetails(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter accountNo : ");
        accountNo = sc.nextInt();
        System.out.print("Enter userName : ");
        userName = sc.next();
        System.out.print("Enter email : ");
        email = sc.next();
        System.out.print("Enter accountType : ");
        accountType = sc.next(); 
        System.out.print("Enter accountBalance : ");
        accountBalance = sc.nextInt();
        sc.close();
    }
    public void displayAccountDetails(){
        System.out.println("\n<----Account details---->\n");
        System.out.println("accountNo : "+accountNo);
        System.out.println("userName : "+userName);
        System.out.println("email : "+email);
        System.out.println("accountType : "+accountType);
        System.out.println("accountBalance : "+accountBalance);
    }
}
public class AccountDetail {
    public static void main(String[] args) {
        Bank_Account a1 = new Bank_Account();
        a1.getAccountDetails();
        a1.displayAccountDetails();
    }
}
