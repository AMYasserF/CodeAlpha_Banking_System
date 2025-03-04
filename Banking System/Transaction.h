#pragma once
using namespace System;

ref class Account;

ref class Transaction {
private:
    String^ type;  // "Deposit", "Withdraw", "Transfer"
    double amount;
    DateTime date;
    Account^ sourceAccount;
    Account^ destinationAccount; // Only for transfers

public:
    // Constructor for Deposit/Withdraw (No destination)
    Transaction(String^ transType, double transAmount, Account^ source);

    // Constructor for Transfer (With destination)
    Transaction(String^ transType, double transAmount, Account^ source, Account^ dest);

    // Getters
    String^ GetType();
    double GetAmount();
    DateTime GetDate();
    Account^ GetSourceAccount();
    Account^ GetDestinationAccount();

    
};
