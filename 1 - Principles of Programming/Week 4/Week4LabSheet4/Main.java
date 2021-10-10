
/* 
 * Lab Sheet 4
 */

/* Question 1
 Make a BankAccount Class. This Class should provide a constructor, three mutators and three accessors of the type that a bank account might need. 
 
 In the Main class (i.e. this class) create two different BankAccount instances from its main method (i.e. two BankAccount objects). Demonstrate the use of your mutators and accessors within that same main method.
*/

class Main {
// create generalised print method to display balance
    // uses 2 x accessor methods from the BankAccount class
    public static void printBalance(BankAccount bankAccount) {
        System.out.println("The current balance for account number " + bankAccount.getAccountNumber() + " is £"
                + String.format("%.2f", bankAccount.getBalance()));
    }

    public static void main(String[] args) {

        // creating object instances and method testing

        // create bank account instance 1
        BankAccount bankAccount1 = new BankAccount(123456, 50, 0);
        // test methods
        System.out.println("BANK ACCOUNT EXAMPLE 1");
        printBalance(bankAccount1); // accessor
        bankAccount1.deposit(20); // mutator
        bankAccount1.withdraw(10); // mutator
        bankAccount1.withdraw(150); // mutator
        printBalance(bankAccount1); // accessor
        bankAccount1.changeOverdraft(50); // mutator
        bankAccount1.withdraw(70); // mutator

        // create bank account instance 2
        BankAccount bankAccount2 = new BankAccount(111111, 1000.52, 1000);
        // test methods
        System.out.println("BANK ACCOUNT EXAMPLE 2");
        printBalance(bankAccount2);
        bankAccount2.withdraw(800);
        bankAccount2.withdraw(1000);
        bankAccount2.changeOverdraft(50);
        bankAccount2.changeOverdraft(800);
        bankAccount2.deposit(5000);
    }
}
