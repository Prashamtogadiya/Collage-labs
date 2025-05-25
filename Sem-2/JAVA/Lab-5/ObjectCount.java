import java.util.Scanner;

class Count{
    static int count=0;
    public Count(){
        count++;
    }
}
public class ObjectCount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many object you want to create : ");
        int n = sc.nextInt();
        sc.close();
        Count[] c = new Count[n];
        for (int i = 0; i < n; i++) {
            c[i] = new Count();
        }
        System.out.println("Number of created objects are : "+Count.count);
    }
}
