import java.io.FileWriter;
import java.io.IOException;

public class PrimeRange {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("prime.txt");
            for (int i = 2; i <= 100; i++) {
                if (isPrime(i)) {
                    writer.write(i + "\n");
                }
            }
            writer.close();
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
            e.printStackTrace();
        }
    }
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int divisor = 2; divisor <= Math.sqrt(num); divisor++) {
            if (num % divisor == 0) {
                return false;
            }
        }
        return true;
    }
}
