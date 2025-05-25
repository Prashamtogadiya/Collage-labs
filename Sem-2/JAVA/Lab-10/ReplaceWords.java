import java.io.*;

public class ReplaceWords {
    public static void main(String[] args) {

        try {
            BufferedReader reader = new BufferedReader(new FileReader("file1.txt"));
            BufferedWriter writer = new BufferedWriter(new FileWriter("file2.txt"));

            String line;

            while ((line = reader.readLine()) != null) {
                String modifiedLine = line.replaceAll("world1", "world2");
                writer.write(modifiedLine);
                writer.newLine();
            }

            reader.close();
            writer.close();
        } catch (IOException e) {
            System.err.println("Error reading/writing files: " + e.getMessage());
        }
    }
}
