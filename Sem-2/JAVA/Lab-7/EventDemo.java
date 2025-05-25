interface EventListener {
    public void performEvent();
}

interface MouseListener extends EventListener {
    public void mouseClicked();
    public void mousePressed();
    public void mouseReleased();
    public void mouseMoved();
    public void mouseDragged();
}

interface KeyListener extends EventListener {
    public void keyPressed();
    public void keyReleased();
}

public class EventDemo implements MouseListener, KeyListener {
    public void performEvent() {
        System.out.println("Performing event for EventListener");
    }

    public void mouseClicked() {
        System.out.println("Performing event for mouseClicked");
    }

    public void mousePressed() {
        System.out.println("Performing event for mousePressed");
    }

    public void mouseReleased() {
        System.out.println("Performing event for mouseReleased");
    }

    public void mouseMoved() {
        System.out.println("Performing event for mouseMoved");
    }

    public void mouseDragged() {
        System.out.println("Performing event for mouseDragged");
    }

    public void keyPressed() {
        System.out.println("Performing event for keyPressed");
    }

    public void keyReleased() {
        System.out.println("Performing event for keyReleased");
    }

    public static void main(String[] args) {
        EventDemo eventDemo = new EventDemo();
        eventDemo.performEvent();
        eventDemo.mouseClicked();
        eventDemo.mousePressed();
        eventDemo.mouseReleased();
        eventDemo.mouseMoved();
        eventDemo.mouseDragged();
        eventDemo.keyPressed();
        eventDemo.keyReleased();
    }
}