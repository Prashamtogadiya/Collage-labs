// import java.nio.file.Files;
// import java.nio.file.Path;
// import java.nio.file.Paths;

// public class FileDemo {
//     public static void main(String[] args) {
//         try {
//             Path inputPath = Path.of("text.txt");
//             Path outputPath = Path.of("newText.txt");
//             // Path inputPath = Paths.get("text.txt");
//             // Path outputPath = Paths.get("newText.txt");

//             String content = Files.readString(inputPath);

//             Files.write(outputPath, content.getBytes());

//             System.out.println("File reading and writing both done.");
//         } catch (Exception e) {
//             System.out.println("An error occurred: " + e.getMessage());
//         }
//     }
// }

import java.io.*;

public class FileDemo{
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("text.txt"), 1000000000);
            BufferedWriter bw = new BufferedWriter(new FileWriter("newText.txt"), 1000000000);
            String line = null;
            while (br.ready()) {
                line = br.readLine();
                System.out.println(line);
            }
            bw.write(line);
            // br.close();
            // bw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}