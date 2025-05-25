import java.io.*;

public class Count5 {
    public static void main(String[] args) {
        try {
            if (args.length != 1) {
                throw new Exception("Please enter valid file name with file type.");
            }
            FileInputStream in = new FileInputStream(args[0]);
            int count = 0;
            int c;
            while ((c = in.read()) != -1) {
                if (c == '5') {
                    count++;
                }
            }
            System.out.println("The number of occurrences of digit 5 is: " + count);
            in.close();
        } catch (Exception e) {
            System.err.println(e.getMessage());
        }
    }
}