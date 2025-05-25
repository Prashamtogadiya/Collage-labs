public class FirstUpperCase {
    public static void main(String[] args) {
        String a = args[0];
        if (a.charAt(0) < 64 || a.charAt(0) > 91) {
            System.out.println("Error ocurred");
        }
    }
}
