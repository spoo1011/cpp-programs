// Debug Program 2

#include <iostream>
#include <string>
using namespace std;

// Base class
class Account
{
private:
    int accNo;
    double balance;

public:
    Account(int a, double b)
    {
        accNo = a;
        balance = b;
    }

    void deposit(double amt)
    {
        balance = balance + amt;
    }

    void withdraw(double amt)
    {
        if (amt > balance)
            cout << "Insufficient Balance" << endl;
        else
            balance = balance - amt;
    }

    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    ~Account()
    {
        cout << "Account closed" << endl;
    }
};

// Derived class
class Savings : public Account
{
protected:
    double interestRate;

public:
    Savings(int a, double b, double r) : Account(a, b)
    {
        interestRate = r;
    }

    void addInterest()
    {
        double interest = getBalance() * interestRate / 100;
        deposit(interest);
    }
};

// Another derived class
class PremiumSavings : public Savings
{
private:
    int rewardPoints;

public:
    PremiumSavings(int a, double b, double r, int p)
        : Savings(a, b, r)
    {
        rewardPoints = p;
    }

    void showDetails()
    {
        display();
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Reward Points: " << rewardPoints << endl;
    }
};

// Friend function
class Bank;

class Auditor
{
public:
    void audit(Bank b);
};

class Bank
{
private:
    double totalFunds;

public:
    Bank()
    {
        totalFunds = 0;
    }

    void addFunds(double amt)
    {
        totalFunds += amt;
    }

    friend void Auditor::audit(Bank b);
};

void Auditor::audit(Bank b)
{
    cout << "Total Bank Funds: " << b.totalFunds << endl;
}

// Utility class
class Logger
{
public:
    static int logCount;

    void log(string msg)
    {
        cout << "LOG: " << msg << endl;
        logCount++;
    }
};

int Logger::logCount = 0;

int main()
{
    Savings s1(1001, 5000, 5);
    s1.deposit(1000);
    s1.addInterest();
    s1.display();

    PremiumSavings p1(2001, 10000, 7, 200);
    p1.showDetails();

    Logger l1;
    l1.log("Account Created");

    Logger l2;
    l2.log("Transaction Done");

    cout << "Total Logs: " << Logger::logCount << endl;

    Bank b1;
    b1.addFunds(50000);
    b1.addFunds(25000);

    Auditor a;
    a.audit(b1);

    s1.deposit(5000); //

    s1.display();

    Account a1;

    p1.PremiumSavings= s1;

    s1.deposit(-500);

    cout << p1.interestRate << endl;

    s1.~Savings();

    return 0;
}
