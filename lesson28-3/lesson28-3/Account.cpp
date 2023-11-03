#include "Account.h"

Account::Account()
{
    this->balance = 0;
}

Account::Account(double balance)
{
    this->balance = balance;
}

void Account::topUpCash(double cash)
{
    this->balance += cash;
}

void Account::withDrawCash(double cash)
{
    if (this->balance >= cash)
        this->balance -= cash;
}

double Account::getBalance() const
{
    return balance;
}

void Account::print() const
{
    cout << "\tAccount\n";
    cout << "Balance: " << balance << " uah\n";
}
