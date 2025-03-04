#include "BankingServices.h"
#include "Account.h"
#include "Transaction.h"
#include "Customer.h"
using namespace System::Collections::Generic;

BankingServices::BankingServices()
{
    customers = gcnew List<Customer^>;
}

void BankingServices::addCustomer(Customer^ newCustomer)
{
    customers->Add(newCustomer);
}

List<Customer^>^ BankingServices::GetCustomers()
{
    return customers;
}

Customer^ BankingServices::GetCustomer(String^ username)
{

    for each (Customer ^ customer in customers)
    {
        if (customer->GetName() == username)
        {
            return customer;
        }
    }
    return nullptr;
}


//Deposit Money
bool BankingServices::Deposit(Account^ account, double amount)
{
    if (amount <= 0) return false;

    account->SetBalance(account->GetBalance() + amount);
    account->GetTransactions()->Add(gcnew Transaction("Deposit", amount, account));
    return true;
}
//Withdraw Money
bool BankingServices::Withdraw(Account^ account, double amount)
{
    if (amount <= 0 || amount > account->GetBalance()) return false; 

    account->SetBalance(account->GetBalance() - amount);
    account->GetTransactions()->Add(gcnew Transaction("Withdraw", amount, account)); 
    return true;
}

// Transfer Money


bool BankingServices::Transfer(Customer^ toCustomer, Account^ fromAccount, int targetAccountNumber, double amount)
{
    if (amount <= 0 || fromAccount->GetBalance() < amount) return false;  // Invalid Amount or Insufficient funds
    Account^ targetAccount = toCustomer->GetAccount(targetAccountNumber);
    if (targetAccount != nullptr)
    {
        fromAccount->SetBalance(fromAccount->GetBalance() - amount);
        targetAccount->SetBalance(targetAccount->GetBalance() + amount);

        fromAccount->GetTransactions()->Add(gcnew Transaction("Transfer", amount, fromAccount, targetAccount));

        return true;
    }
    return false; // Target account doesn't exist
}
   
