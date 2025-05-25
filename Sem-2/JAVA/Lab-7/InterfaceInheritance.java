interface A {
    int c = 1;
    void methodA();
}

interface A1 extends A {
    int c1 = 2;
    void methodA1();
}

interface A2 extends A {
    int c2 = 3;
    void methodA2();
}

interface A12 extends A1, A2 {
}

class B implements A12 {
    @Override
    public void methodA() {
        System.out.println("Constant A: " + c);
    }

    @Override
    public void methodA1() {
        System.out.println("Constant A1: " + c1);
    }

    @Override
    public void methodA2() {
        System.out.println("Constant A2: " + c2);
    }
}

public class InterfaceInheritance {
    public static void main(String[] args) {
        B b = new B();
        b.methodA();
        b.methodA1();
        b.methodA2();
    }
}