#include "Moneybox.h"

Moneybox::Moneybox(int procent)
{
    this->procent = procent;
    this->cashBack = 0;
}

int Moneybox::getProcen() const
{
    return procent;
}

double Moneybox::getCashBack() const
{
    return cashBack;
}

void Moneybox::withDrawCash(double cash)
{
    if (this->balance >= cash)
    {
        cashBack += cash * procent / 100;
        Account::withDrawCash(cash);
    }
}

void Moneybox::transferCashBack()
{
    this->balance += cashBack;
    cashBack = 0;
}

void Moneybox::print() const
{
    Account::print();
    cout << "Procc: " << procent << "%\n";
    cout << "CashBack: " << cashBack << " uah\n";
}
