class MorningThread implements Runnable {
    @Override
    public void run() {
        while (true) {
            System.out.println("Good Morning");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class AfternoonThread implements Runnable {
    @Override
    public void run() {
        while (true) {
            System.out.println("Good Afternoon");
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Message {
    public static void main(String[] args) {
        Thread morningThread = new Thread(new MorningThread());
        Thread afternoonThread = new Thread(new AfternoonThread());

        morningThread.start();
        afternoonThread.start();
    }
}
