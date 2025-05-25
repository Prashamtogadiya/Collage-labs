class InsufficientFundException extends Exception {
    public InsufficientFundException(String message) {
        super(message);
    }
}

class Account {
    private double balance;

    public Account(double initialBalance) {
        this.balance = initialBalance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Amount deposited successfully.");
    }

    public void withdraw(double amount) throws InsufficientFundException {
        if (amount > balance) {
            throw new InsufficientFundException("Insufficient funds. Cannot withdraw.");
        }
        balance -= amount;
        System.out.println("Amount withdrawn successfully.");
    }
}

public class Bank {
    public static void main(String[] args) {
        Account myAccount = new Account(1000.0);

        try {
            myAccount.deposit(500.0);
            myAccount.withdraw(200.0);
            myAccount.withdraw(1500.0);
        } catch (InsufficientFundException e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}
