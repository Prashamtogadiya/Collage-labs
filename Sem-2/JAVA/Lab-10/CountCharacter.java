import java.io.*;

public class CountCharacter {
    public static void main(String[] args) {
        FileInputStream in = null;
        try {
            in = new FileInputStream("file1.txt");
            int i = 0;
            int characters = 0, words = 0, lines = 0;

            while ((i = in.read()) != -1) {
                if ((char) i == ' ' || (char) i == '\n') 
                {
                    ++words;
                    if ((char) i == '\n')
                    {
                        ++lines;
                    }
                } else {
                    characters++;
                }
            }
            System.out.println("Characters: " + (characters - lines - 1));
            System.out.println("Words: " + words);
            System.out.println("Lines: " + (lines + 1));
        } catch (IOException e) {
            System.err.println("Error opening file '" + "file1.txt" + "'");
        } 
        finally {
            if (in != null) {
                try {
                    in.close();
                } catch (IOException e) {
                    System.out.println(e);
                }
            }
        }
    }
}