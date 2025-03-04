#include "Account.h"
#include "Customer.h"
#include "Transaction.h"



// Constructor

Account::Account( double initialBalance) {
    nextNumber++;
    accountNumber = nextNumber;
    balance = initialBalance;
    transactions = gcnew List<Transaction^>();  // Initialize transaction list
}

// Getters
int Account::GetAccountNumber() { return accountNumber; }
double Account::GetBalance() { return balance; }
List<Transaction^>^ Account::GetTransactions() { return transactions; }

//Setters
void Account::SetBalance(double newBalance)
{
    balance = newBalance;
}





