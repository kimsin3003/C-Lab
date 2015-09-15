#include "Account.h"



void Account::Deposite(int money)
{
	balance += money;
}

void Account::Withdraw(int money)
{
	balance -= money;
}

Account::Account(std::string name, std::string number, int bal)
{
	accountName = name;
	accountNumber = number;
	balance = bal;
}


Account::~Account()
{
}
