import java.util.Scanner;

public class VowelCounter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] vowelCounts = new int[5];

        while (true) {
            System.out.print("Enter a str (or 'quit' to exit): ");
            String str = sc.nextLine();
            str=str.toLowerCase();
            
            if (str.equals("quit")) {
                break;
            }

            for (char c : str.toCharArray()) {
                    switch (c) {
                        case 'a':
                            vowelCounts[0]++;
                            break;
                        case 'e':
                            vowelCounts[1]++;
                            break;
                        case 'i':
                            vowelCounts[2]++;
                            break;
                        case 'o':
                            vowelCounts[3]++;
                            break;
                        case 'u':
                            vowelCounts[4]++;
                            break;
                    }
            }
            System.out.println("\nTotal vowel counts:");
            System.out.println("a: " + vowelCounts[0]);
            System.out.println("e: " + vowelCounts[1]);
            System.out.println("i: " + vowelCounts[2]);
            System.out.println("o: " + vowelCounts[3]);
            System.out.println("u: " + vowelCounts[4]);
        }
        sc.close();
    }
}
