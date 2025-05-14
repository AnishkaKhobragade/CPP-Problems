/*
Project for CS_201

Author: Anishka Khobragade
Student ID: jk9443

*/

#include "project.h"

// IMPLEMENT HERE 

//implementation from BankAccount class

BankAccount:: BankAccount(){
    m_accountNumber = 0;
    m_balance = 0;
}

BankAccount:: BankAccount(float balance){
    m_accountNumber = 0;
    m_balance = balance;
}

int BankAccount:: getAccountNumber() const {
    return m_accountNumber;
}

float BankAccount:: getBalance() const{
    return m_balance;
}

void BankAccount:: deposit(float cash){
    m_balance += cash;
}

bool BankAccount:: withdraw(float cash){
    //if sufficient balance, cash withdrawed
    if (m_balance >= cash)
    {
        m_balance -= cash;
        std::cout << "Sufficient fund available, transaction complete." << std::endl;
        return true;
    }
    //if insufficient balance, cash isn't withdrawed 
    else {
        std::cout << "Insufficient fund available, transaction cancelled." << std::endl;
        return false;
    }
    
}

//implementation from Customer class

Customer:: Customer(const std::string name){
    m_name = name;
}

std:: string Customer:: getName() const{
    return m_name;
}

std:: vector<BankAccount *> Customer:: getAccounts() const{
    return m_accounts;
}

int Customer:: getNumAccounts() const{
    return m_accounts.size();
}

void Customer:: addAccount(BankAccount &account){
    m_accounts.push_back(&account);
}

bool Customer:: removeAccount(BankAccount account){
    //account is removed by erasing if the same as the one that should be removed
    for (int i = 1; i <= m_accounts.size(); i++) {
        if (m_accounts[i] == &account) {
            m_accounts.erase(m_accounts.begin() + i);
            return true;
        }
    }
    return true;
}

//implementation from Bank class

Bank::Bank(const std::string name){
    m_name = name;
    m_NumCustomers = 0;
}

std::vector<Customer*> Bank:: getCustomers()const{
    return m_customers;
}

int Bank:: getNumCustomers()const{
    return m_NumCustomers;
}

void Bank:: addCustomer(Customer &customer){
    //adds customer and increments the customer number
    m_customers.push_back(&customer);
    m_NumCustomers++;
}

bool Bank::removeCustomer(const std::string name){
    //remove customer by erasing the name from the vector
    for (int i = 1; i <= m_customers.size(); i++) {
        if (m_customers[i]->getName() == name) {
            m_customers.erase(m_customers.begin() + i);
            m_NumCustomers--;
            return true;
        }
    }
    return false;
}

bool Bank:: transfer(BankAccount &from_account, BankAccount &to_account, float amount){
    //checks if there is enough money to withdraw from the "from account", if yes, they deposit in "to account"
    if (from_account.withdraw(amount)) {
            to_account.deposit(amount);
            return true;
        } else {
            return false;
        }
}

int main()
{

    BankAccount account_1 = BankAccount();
    BankAccount account_2 = BankAccount(1000);
    BankAccount account_3 = BankAccount(500);
    BankAccount account_4 = BankAccount(3650);
    BankAccount account_5 = BankAccount(27553);
    BankAccount account_6 = BankAccount(100);

    Customer customer_1 = Customer("Alice");
    Customer customer_2 = Customer("Bob");

    customer_1.addAccount(account_1);
    customer_1.addAccount(account_2);

    customer_2.addAccount(account_3);
    customer_2.addAccount(account_4);
    customer_2.addAccount(account_5);

    // Check the number of account for customers
    std::cout << "Check: " << customer_1.getNumAccounts() << " = 2" << std::endl;
    std::cout << "Check: " << customer_2.getNumAccounts() << " = 3\n" << std::endl;

    Bank bank("ABC");

    bank.addCustomer(customer_1);
    bank.addCustomer(customer_2);

    // Check the number of customer for customers
    std::cout << "Check: " << bank.getNumCustomers() << " = 2\n" << std::endl;

    // Check whether the new account is added
    customer_1.addAccount(account_6);
    std::cout << "Check: " << bank.getCustomers()[0]->getNumAccounts() << " = 3\n" << std::endl;

    // Check whether the account is updated
    account_1.deposit(100);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 100\n" << std::endl;

    // Check whether the withdraw is failed
    account_1.withdraw(1000);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 100\n"<< std::endl;

    // Check whether the withdraw is done
    account_1.withdraw(100);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 0\n" << std::endl;

    // Check whether the withdraw is failed
    account_1.withdraw(100);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[0]->getBalance() << " = 0\n" << std::endl;

    // Check whether the transfer is done
    bank.transfer(account_2, account_3, 100.0);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[1]->getBalance() << " = 900" << std::endl;
    std::cout << "Check: " << bank.getCustomers()[1]->getAccounts()[0]->getBalance() << " = 600\n" << std::endl;

    // Check whether the transfer is failed
    bank.transfer(account_2, account_3, 1000.0);
    std::cout << "Check: " << bank.getCustomers()[0]->getAccounts()[1]->getBalance() << " = 900" << std::endl;
    std::cout << "Check: " << bank.getCustomers()[1]->getAccounts()[0]->getBalance() << " = 600\n" << std::endl;

    customer_1.removeAccount(account_1); 
    std::cout << "Check: " << bank.getCustomers()[0]->getNumAccounts() << " = 2\n" << std::endl;

    bank.removeCustomer("Alicee");
    std::cout << "Check: " << bank.getNumCustomers() << " = 2\n" << std::endl;

    bank.removeCustomer("Alice");
    std::cout << "Check: " << bank.getNumCustomers() << " = 1\n" << std::endl;

    bank.removeCustomer("Bob");
    std::cout << "Check: " << bank.getNumCustomers() << " = 0\n" << std::endl;

    return 0;
}