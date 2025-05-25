class SharedBuffer {
    private int value;
    private boolean isValueSet = false;

    synchronized void setValue(int newValue) {
        while (isValueSet) {
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        value = newValue;
        isValueSet = true;
        notify();
    }

    synchronized int getValue() {
        while (!isValueSet) {
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        isValueSet = false;
        notify();
        return value;
    }
}

class Communicator implements Runnable {
    private final SharedBuffer buffer;
    private final int id;

    Communicator(SharedBuffer buffer, int id) {
        this.buffer = buffer;
        this.id = id;
    }

    @Override
    public void run() {
        if (id == 1) {
            buffer.setValue(1);
            buffer.setValue(2);
            buffer.setValue(3);
        } else {
            for (int i = 0; i < 3; i++) {
                int receivedValue = buffer.getValue();
                System.out.println("Thread " + id + " received: " + receivedValue);
            }
        }
    }
}

public class Communication {
    public static void main(String[] args) {
        SharedBuffer buffer = new SharedBuffer();

        Thread thread1 = new Thread(new Communicator(buffer, 1));
        Thread thread2 = new Thread(new Communicator(buffer, 2));

        thread1.start();
        thread2.start();

        try {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Communication completed.");
    }
}
