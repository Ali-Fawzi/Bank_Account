#include"Header.h"
#include <iostream>

BankAccount::BankAccount(const std::string& client, const std::string& num, double bal)//initialize the class
{
    name = client;//link them with the main class
    acctnum = num;//same here
    if (bal < 0)//checking if the balance is in positive or not
    {
        std::cout << "Number of ballance can't be negative; balance set to 0.\n";
        balance = .0;
    }
    else
        balance = bal;//link them with the main class
}
void BankAccount::show(void) const// Show the values
{
    std::cout << "Name:   " << name
        << "\naccount: " << acctnum
        << "\nbalance: " << balance << std::endl;
}
void BankAccount::deposit(double cash)// deposit
{
    if (cash < 0)
        std::cout << "Number of deposit can't be negative. "
        << "Transaction is aborted.\n";
    else
        balance += cash;
}
void BankAccount::withdraw(double cash)// withdraw.
{
    if (cash < 0)
        std::cout << "Number of withdraw can't be negative. "
        << "Transaction is aborted.\n";
    else if (cash > balance)
        std::cout << "You can't withdraw more than you have! "
        << "Transaction is aborted.\n";
    else
        balance -= cash;
}
