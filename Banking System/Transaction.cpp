#include "Transaction.h"
#include "Account.h"


// Constructor for Deposit/Withdraw (No destination)
Transaction::Transaction(String^ transType, double transAmount, Account^ source) {
    type = transType;
    amount = transAmount;
    date = DateTime::Now;
    sourceAccount = source;
    destinationAccount = nullptr;
}

// Constructor for Transfer (With destination)
Transaction::Transaction(String^ transType, double transAmount, Account^ source, Account^ dest) {
    type = transType;
    amount = transAmount;
    date = DateTime::Now;
    sourceAccount = source;
    destinationAccount = dest;
}

// Getters
String^ Transaction::GetType() { return type; }
double Transaction::GetAmount() { return amount; }
DateTime Transaction::GetDate() { return date; }
Account^ Transaction::GetSourceAccount() { return sourceAccount; }
Account^ Transaction::GetDestinationAccount() { return destinationAccount; }

