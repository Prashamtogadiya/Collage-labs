import java.util.Scanner;

class Complex{
    double real;
    double imaginary;
    public Complex(){
        real = 1;
        imaginary = 1;
    }
    public Complex(double real, double imaginary){
        this.real = real;
        this.imaginary = imaginary;
    }
    public void add(Complex c2){
        System.out.println("c1 = "+this.real+" + "+this.imaginary+"i");
        System.out.println("c2 = "+c2.real+" + "+c2.imaginary+"i");
        this.real+=c2.real;
        this.imaginary+=c2.imaginary;
        System.out.println("Sum = "+this.real+" + "+this.imaginary+"i");
    }
}

public class ComplexNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter real part : ");
        double real = sc.nextDouble();
        System.out.print("Enter imaginary part : ");
        double imaginary = sc.nextDouble();
        sc.close();
        
        Complex c1 = new Complex();
        Complex c2 =  new Complex(real,imaginary);
        c1.add(c2);
    }
}
