import java.io.*;
import java.util.Scanner;

public class Search{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name to be searched");
        String name = sc.nextLine();
        int i=0;
        try {
            BufferedReader br = new BufferedReader(new FileReader("name.txt"));
            while (br.ready()) {
                String line = br.readLine();
                
                for (i = 0; i < name.length(); i++) {
                    if (name.charAt(i)!=line.charAt(i)) {
                        break;
                    }
                }
                if (i==name.length()) {
                    System.out.println(line);
                }
            }
            if (i!=name.length()) {
                System.out.println("No name found");
            }
            br.close();
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("No name found");
        } catch (Exception e){
            System.out.println(e);
            e.printStackTrace();
        }
        sc.close();
    }
}