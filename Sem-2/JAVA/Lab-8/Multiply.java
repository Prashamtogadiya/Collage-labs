public class Multiply {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Usage: java PowerCalculator <x> <y>");
            return;
        }

        try {
            int x = Integer.parseInt(args[0]);
            int y = Integer.parseInt(args[1]);
            if (x<0 || y<0) {
                throw new Exception("Negative arguments not allowed.");
            }
            int result = computePower(x, y);
            System.out.println(x + "^" + y + " = " + result);
        } 
        catch (Exception e) {
            System.out.println(e);
        }
    }

    public static int computePower(int x, int y) {
        int result = 1;
        for (int i = 0; i < y; i++) {
            result *= x;
        }
        return result;
    }
}
