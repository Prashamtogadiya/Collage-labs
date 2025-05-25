class AnimalMove {
    static void move(int x, int y){
        System.out.println("animal moved "+x+" in x and " +y+ " in y");
    }
}

public class Super_use {
    public static void main(String[] args) {
        // I can invoke method without creaing object of a class.
        AnimalMove.move(5,6);
    }
}
