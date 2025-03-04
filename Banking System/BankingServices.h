#pragma once
using namespace System;
using namespace System::Collections::Generic;
ref class Account;
ref class Transaction;
ref class Customer;

ref class BankingServices
{
private:
    List<Customer^>^ customers;
public:
    BankingServices();
    void addCustomer(Customer^ newCustomer);
    List<Customer^>^ GetCustomers();
    Customer^ GetCustomer(String^ username);
    static bool Deposit(Account^ account,double amount);
    static bool Withdraw(Account^ account,double amount);
   static bool Transfer(Customer^ toCustomer, Account^ fromAccount, int targetAccountNumber, double amount); // Transfer between different customers

};

