/*
Project for CS_201

Author: Anishka Khobragade
Student ID: jk9443

*/

#include <iostream>
#include <vector>

class BankAccount
{
    public:
        BankAccount();
        BankAccount(float balance);
        int getAccountNumber() const;
        float getBalance() const;
        void deposit(float cash);
        bool withdraw(float cash);

    private:
        int m_accountNumber;
        float m_balance;
};

class Customer
{
    public:
        Customer(const std::string name);
        std::string getName() const;
        std::vector<BankAccount *> getAccounts() const;
        int getNumAccounts()const;
        void addAccount(BankAccount &account);
        bool removeAccount(BankAccount account);

    private:
        std::string m_name;
        std::vector<BankAccount *> m_accounts;
};

class Bank
{
    public:
        Bank(const std::string name);
        std::vector<Customer *> getCustomers()const;
        int getNumCustomers()const;
        void addCustomer(Customer &customer);
        bool removeCustomer(const std::string name);
        bool transfer(BankAccount &from_account, BankAccount &to_account, float amount);

    private:
        std::string m_name;
        std::vector<Customer *> m_customers;
        int m_NumCustomers;
};
