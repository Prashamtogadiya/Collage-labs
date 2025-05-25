import java.io.*;
import java.util.Scanner;

public class ScanStudentsData {
    public static void main(String[] args) {
        // With File IO classes
        // try {
        //     FileInputStream in = new FileInputStream("mystudents.csv");
        //     int c;
        //     File newFile =  new File("newstudents.txt");
        //     FileOutputStream out = new FileOutputStream("newstudents.txt");
        //     while ((c=in.read())!=-1) {
        //         out.write(c);
        //         if((char)c=='\n'){
        //             System.out.println();
        //         }
        //     }
        //     in.close();
        //     out.close();
        // } catch (Exception e) {
        //     System.out.println(e);
        // }

        // With Scanner class
        try {
            Scanner sc = new Scanner(new File("mystudents.csv"));
    
            while (sc.hasNext()) {
                System.out.println(sc.next());
            }
    
            sc.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
