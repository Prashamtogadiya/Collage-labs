public class PyramidString {
    public static void main(String[] args) {
        String str = "string";
        for (int i = 1; i < str.length()+1; i++) {
            System.out.println(str.substring(0, i));
        }
    }
}
