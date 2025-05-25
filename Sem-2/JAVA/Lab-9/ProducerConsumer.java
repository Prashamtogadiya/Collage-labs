class D {
    int i;
    boolean val = false;

    public synchronized void set(int i) {
        while (val) {
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        this.i = i;
        notify();
        val = true;
        System.out.println("set : " + i);
    }

    public synchronized void get() {
        while (!val) {
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        notify();
        val = false;
        System.out.println("Get : " + i);
    }
}

class Producer extends Thread {
    D d;

    public Producer(D d) {
        this.d = d;
    }

    public void run() {
        int i = 0;
        while (true) {
            d.set(i++);
            try {
                Thread.sleep(400);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class Consumer extends Thread {
    D d;

    public Consumer(D d) {
        this.d = d;
    }

    public void run() {
        while (true) {
            d.get();
            try {
                Thread.sleep(400);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

public class ProducerConsumer {
    public static void main(String[] args) {
        D d = new D();
        Producer p = new Producer(d);
        Consumer c = new Consumer(d);
        p.start();
        c.start();
    }
}