#include <iostream>
using namespace std;

class BankAccount {
public:
    BankAccount(int accountNumber, double balance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;

private:
    int accountNumber; // account number
    double balance; // current balance 
};

BankAccount::BankAccount(int accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}

void BankAccount::deposit(double amount) {
    this->balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (this->balance >= amount) {
        this->balance -= amount;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

double BankAccount::getBalance() const {
    return this->balance;
}

int main() {
    BankAccount myAccount(12345, 1000.0);
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    cout << "Current balance: " << myAccount.getBalance() << endl;
    return 0;
}

