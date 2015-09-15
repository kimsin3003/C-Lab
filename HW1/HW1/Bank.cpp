#include "Bank.h"
#include <vector>
#include <iostream>

Bank Bank::bank;

void Bank::MakeAccount(std::string name, std::string number, int bal) {
	accounts.push_back(Account(name, number, bal));
}

void Bank::SetDeposite(std::string number, int money)
{
	for (auto& iter = accounts.begin(); iter != accounts.end(); iter++) {
		if (iter->GetAccountNumber() == number)
			iter->Deposite(money);
	}
}
void Bank::ShowAllAccount()
{
	for (auto& iter = accounts.begin(); iter != accounts.end(); iter++)
		std::cout << "account name: " << iter->GetAccountName() << " account number: " << iter->GetAccountNumber() << " balance: " << iter->GetBalance() << std::endl;
}

Bank::Bank()
{
}


Bank::~Bank()
{
}
