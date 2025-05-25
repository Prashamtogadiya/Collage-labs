import java.util.Scanner;
public class Circle{
    public static void areaOfCircle(double r){
        System.out.println(Math.PI*r*r);
    }
    public static void main(String[] args){
        System.out.print("Eneter radius of circle : ");
        Scanner sc = new Scanner(System.in);
        double r = sc.nextDouble();
        areaOfCircle(r);
        sc.close();
    }
}