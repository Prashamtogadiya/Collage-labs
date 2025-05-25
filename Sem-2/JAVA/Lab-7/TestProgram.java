interface Transport {
    void deliver();
}

abstract class Animal {
}

class Tiger extends Animal {
}

class Camel extends Animal implements Transport {
    @Override
    public void deliver() {
        System.out.println("Camel is delivering...");
    }
}

class Deer extends Animal {
}

class Donkey extends Animal implements Transport {
    @Override
    public void deliver() {
        System.out.println("Donkey is delivering...");
    }
}

public class TestProgram {
    public static void main(String[] args) {
        Animal[] animals = {new Tiger(), new Camel(), new Deer(), new Donkey()};

        for (Animal animal : animals) {
            if (animal instanceof Transport) {
                Transport transport = (Transport) animal;
                transport.deliver();
            }
        }
    }
}