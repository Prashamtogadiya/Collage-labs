import java.util.Scanner;

public class Arrays{
    public static void main(String[] args){
        int arr[] = new int[4];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter elements");
        for(int i=0; i<4; i++){
            System.out.printf("a[%d] : ",i);
            arr[i]=sc.nextInt();
        }
        sc.close();
        System.out.println("avg = "+((arr[0]+arr[1]+arr[2]+arr[3])/4.0));
    }
}