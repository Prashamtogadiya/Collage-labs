import java.io.*;

public class Students {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("mystudents.csv"));
            String line;
            while ((line = br.readLine())!=null) {
                String[] data = line.split(",");
                System.out.println("Name : "+data[1]);
                System.out.println("Roll No. : "+data[0]);
                System.out.println("Class : "+data[2]);
                System.out.println();
            }
            br.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
