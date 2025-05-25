import java.util.Scanner;

public class ReverseArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter length of array : ");
        int l = sc.nextInt();
        int arr[] = new int[l];
        System.out.println("Enter elements");
        for(int i=0; i<l; i++){
            System.out.printf("a[%d] : ",i);
            arr[i]=sc.nextInt();
        }
        System.out.println("<------Array in reverse order------>");
        for(int i=l-1; i>=0; i--){
            System.out.printf("%d ",arr[i]);
        }
        sc.close();
    }
}
