#include <iostream>
using namespace std;

class BankAccount {
private:
    // PRIVATE: Hidden data. Only the class functions can touch these.
    string name;
    int balance;
    int accNum;
    static int count; // Shared counter for all accounts

public:
    // CONSTRUCTOR: Runs automatically when you create an account
    BankAccount(string n, int b) {
        name = n;
        balance = b;
        count++;      // Increment total accounts
        accNum = count;
        cout << "Created A/C #" << accNum << " for " << name << endl;
    }

    // PUBLIC FUNCTIONS: These are the "buttons" the user can press
    void deposit(int amt) {
        if (amt > 0) balance += amt;
        cout << "Deposited: " << amt << endl;
    }

    void withdraw(int amt) {
        if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Invalid or Insufficient funds!" << endl;
        }
    }

    void show() {
        cout << "Holder: " << name << " | Balance: " << balance << endl;
        cout << "-----------------------------" << endl;
    }

    // STATIC FUNCTION: Belongs to the "Bank", not a specific person
    static void showTotal() {
        cout << "Total Accounts in Bank: " << count << endl;
    }
};

// Initialize the static counter outside the class
int BankAccount::count = 0;

int main() {
    // Creating two separate objects
    BankAccount acc1("Rahul", 5000);
    BankAccount acc2("Priya", 10000);

    // Using the public functions
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc1.show();

    acc2.withdraw(15000); // This will fail (insufficient funds)
    acc2.show();

    // Check the global bank stats
    BankAccount::showTotal();

    return 0;
}
