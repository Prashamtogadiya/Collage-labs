import java.io.*;
import java.lang.String;

public class CheckFileOrFolder {
    public static void main(String[] args) {
        if (args.length != 1) {
            System.out.println("Enter a valid file name in command line please.");
            return;
        } else {
            File file = new File(args[0]);

            if (!file.isFile() && !file.isDirectory()) {
                System.out.println("File or directory not found.");
            } else {
                if (file.isFile()) {
                    System.out.println("File size: " + file.length() + " bytes");
                } else {
                    System.out.println("Directory contents:");
                    for (File child : file.listFiles()) {
                        System.out.println(child.getName());
                    }
                }
            }
        }
    }
}