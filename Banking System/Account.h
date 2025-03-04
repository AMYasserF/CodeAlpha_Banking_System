#pragma once
using namespace System;
using namespace System::Collections::Generic;

ref class Transaction;

ref class Account {
private:
    static int nextNumber =0;
    int accountNumber;
    double balance;
    List<Transaction^>^ transactions;  // stores Transaction objects

public:
    
    // Constructor
    Account(double initialBalance);

    // Getters
    int GetAccountNumber();
    double GetBalance();
    List<Transaction^>^ GetTransactions();

    // Setters
    void SetBalance(double newBalance);

};
