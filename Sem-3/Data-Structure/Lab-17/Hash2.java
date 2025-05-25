import java.util.Hashtable;

public class Hash2 {
    public static void main(String[] args) {
        Hashtable<String, Integer> table = new Hashtable<>();
        table.put("Jevin", 18);
        table.put("Vatshal", 56);
        table.put("Mihir", 99);
        table.put("Prasham", 1056);

        System.out.println("Prasham's age: "+table.get("Prasham"));
        System.out.println("Mihir's age: "+table.get("Mihir"));
        System.out.println("Vatshal's age: "+table.get("Vatshal"));
        System.out.println("Jevin's age: "+table.get("Jevin"));

        table.remove("Vatshal");
    }
}
