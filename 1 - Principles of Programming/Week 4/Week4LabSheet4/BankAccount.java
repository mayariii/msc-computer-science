public class BankAccount {
    // FIELDS
    private int accountNumber;
    private double balance;
    private double overdraftLimit;

    // CONSTRUCTOR
    // how the object is defined
    public BankAccount(int initialAccountNumber, double initialBalance, double initialOverdraftLimit) {
        accountNumber = initialAccountNumber;
        balance = initialBalance;
        overdraftLimit = -initialOverdraftLimit;
    }

    // OTHER METHODS
    // getters (a.k.a Get Methods or Accessors)
    // get method 1 - getting the current balance
    public double getBalance() {
        return balance;
    }

    // get method 2 - getting the set overdraft limit
    public double getOverdraftLimit() {
        return overdraftLimit;
    }

    // get method 3 - getting the account number
    public int getAccountNumber() {
        return accountNumber;
    }

    // setters (a.k.a Set Methods or Mutators)
    // set method 1 - making a deposit
    public void deposit(double amountToDeposit) {
        balance = balance + amountToDeposit;
        System.out.println("£" + String.format("%.2f", amountToDeposit)
                + " has been deposited successfully. Your current balance is now £" + String.format("%.2f", balance));
    }

    // set method 2 - making a withdrawal
    public void withdraw(double amountToWithdraw) {
        // check if enough money in account to widthdraw requested amount
        if (balance < amountToWithdraw && (balance - amountToWithdraw) < overdraftLimit) {
            System.out.println(
                    "Insufficient funds to withdraw requested amount. Check balance and try again. Your account has not been charged.");
        } else {
            balance = balance - amountToWithdraw;
            System.out.println("£" + String.format("%.2f", amountToWithdraw)
                    + " has been withdrawn successfully. Your current balance is now £"
                    + String.format("%.2f", balance));
        }
    }

    // set method 3 - change overdraft limit;
    public void changeOverdraft(double newOverdraftLimit) {
        // check new overdraft limit doesn't clash with current balance - they still
        // need to pay it off!
        if (-newOverdraftLimit <= balance) {
            overdraftLimit = -newOverdraftLimit;
            System.out.println("A new overdraft limit of £" + String.format("%.2f", overdraftLimit)
                    + " has been set successfully. Thanks for choosing Bank of Bath.");
        } else {
            System.out.println(
                    "Sorry, we could not process your request. Please ensure the requested limit is not above your current balance and try again.");
        }
    }
}
