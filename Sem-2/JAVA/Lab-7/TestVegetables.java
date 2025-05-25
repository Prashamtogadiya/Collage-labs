abstract class Vegetable{
    String name;
    String color;
}
class  Potato extends Vegetable {
    public Potato(String name, String color){
        this.name = name;
        this.color = color;
    }
        public String toString(){
            return name+" "+color;
        }
}
class  Brinjal extends Vegetable {
    public Brinjal(String name, String color){
        this.name = name;
        this.color = color;
    }
        public String toString(){
            return name+" "+color;
        }
}
class  Tomato extends Vegetable {
    public Tomato(String name, String color){
        this.name = name;
        this.color = color;
    }
        public String toString(){
            return name+" "+color;
        }
}
public class TestVegetables {
    public static void main(String[] args) {
        Potato p = new Potato("Potato","Brown");
        System.out.println(p); 
        Potato b = new Potato("Brinjal","Blue");
        System.out.println(b);
        Potato t = new Potato("Tomato","Red");
        System.out.println(t);
    }
}