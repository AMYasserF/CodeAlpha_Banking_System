#pragma once
using namespace System;
using namespace System::Collections::Generic;


ref class Account;
ref class Transaction;

ref class Customer
{
private:
	String^ Name;
	String^ Password;
	List<Account^>^ Accounts;
public:

    //Constructor
    Customer(String^ name, String^ Password);

    // Getters
    String^ GetName();
    String^ GetPassword();
    List<Account^>^ GetAccounts();
    Account^ GetAccount(int accountNumber);
   

    // Setters
    void SetName(String^ newName);
    void SetPassword(String^ newPassword);

    // Add Account
    void AddAccount(Account^ newAccount);

    // Get Customer Details as String
    String^ GetDetails();

    // Get Total Balance
    double GetBalance();

    //Get All Transactions
    List<Transaction^>^ GetAllTransactions();
};


