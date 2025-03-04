#include "Customer.h"
#include "Account.h"

using namespace System;
using namespace System::Collections::Generic;

//Constructor
Customer::Customer(String^ name, String^ password)
{
	Name = name;
	Password = password;
	Accounts = gcnew List<Account^>();
}

// Getters
String^ Customer::GetName() { return Name; }
String^ Customer::GetPassword() { return Password; }
List<Account^>^ Customer::GetAccounts() { return Accounts; }

Account^ Customer::GetAccount(int accountNumber)
{
    for each (Account ^ account in Accounts)
    {
        if (account->GetAccountNumber() == accountNumber)
        {
            return account;
        }
    }
    return nullptr;
}

double Customer::GetBalance()
{
    double totalBalance = 0;
    for each (Account^ account in Accounts)
    {
        totalBalance += account->GetBalance();

    }
    return totalBalance;
}

List<Transaction^>^ Customer::GetAllTransactions()
{
    List<Transaction^>^ AllTransactions = gcnew List<Transaction^>();

    // Use the member variable Accounts instead of creating a new list
    for each (Account ^ account in this->Accounts)
    {
        AllTransactions->AddRange(account->GetTransactions());
    }

    return AllTransactions;
}



// Setters
void Customer::SetName(String^ newName) { Name = newName; }
void Customer::SetPassword(String^ newPassword) { Password = newPassword; }

// Add Account
void Customer::AddAccount(Account^ newAccount) {
    Accounts->Add(newAccount);
}

// Get Customer Details as String
String^ Customer::GetDetails() {
    return  "\nName: " + Name +
        "\Password: " + Password +
        "\nAccounts: " + Accounts->Count;
}