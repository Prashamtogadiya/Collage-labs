import java.util.Scanner;

class RowSumThread implements Runnable {
    private final int[] row;
    private long sum;

    public RowSumThread(int[] row) {
        this.row = row;
        this.sum = 0;
    }

    @Override
    public void run() {
        for (int element : row) {
            sum += element;
        }
    }

    public long getSum() {
        return sum;
    }
}

public class Matrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows (m): ");
        int m = sc.nextInt();
        System.out.print("Enter the number of columns (n): ");
        int n = sc.nextInt();

        int[][] matrix = new int[m][n];
        for (int i = 0; i < m; i++) {
            System.out.printf("Enter %d elements for row %d: ", n, i);
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        RowSumThread[] sum = new RowSumThread[m]; 
        Thread[] threads = new Thread[m];

        for (int i = 0; i < m; i++) {
            sum[i] = new RowSumThread(matrix[i]);
            threads[i] = new Thread(sum[i]);
            threads[i].start();
        }

        try {
            for (Thread thread : threads) {
                thread.join();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }

        System.out.println("\nSum of each row:");
        for (int i = 0; i < m; i++) {
            try{
            System.out.println("Row " + i + ": " + sum[i].getSum());
            }   
            catch(Exception e){
                System.out.println(e.getMessage());
            }
        }
        sc.close();
    }
}
