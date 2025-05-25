import java.io.File;
import java.io.FileOutputStream;

class ThreadMethods1 extends Thread{
    public void run(){
        int i;
        try {
            for ( i = 0; i < 100000; i++) {
                System.out.print(1);
            }
        } catch (Exception e) {
            System.out.println(e);
            e.printStackTrace();
        }
        System.out.println();
    }
}
class ThreadMethods2 extends Thread{
    public void run(){
        int i;
        try {
            for ( i = 0; i < 100000; i++) {
                System.out.print(0);
            }
        } catch (Exception e) {
            System.out.println(e);
            e.printStackTrace();
        }
        System.out.println();
    }
}

public class BinaryFile {
    public static void main(String[] args) {
        // writing binary file
        try {
            FileOutputStream out = new FileOutputStream(new File("f1.bin"));
            for (int i = 0; i < 100; i++) {
                out.write(0);
            }
            for (int i = 0; i < 100; i++) {
                out.write(1);
            }
            out.close();
        } catch (Exception e) {
            System.out.println(e);    
            e.printStackTrace();
        }

        ThreadMethods1 tm1 = new ThreadMethods1();
        ThreadMethods2 tm2 = new ThreadMethods2();

        tm1.start();
        tm2.start();
        try {
            ThreadMethods1.sleep(1000);
            
        } catch (Exception e) {
            System.out.println(e);
        }
        tm1.interrupt();
        
        try {
            tm2.join();
        } catch (InterruptedException e) {
            System.out.println(e);
            e.printStackTrace();
        }
        
        System.out.println(ThreadMethods1.currentThread().isInterrupted());
        System.out.println("Everthing is done");
    }
}
