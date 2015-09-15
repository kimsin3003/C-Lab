#pragma once
#include <string>
#include <vector>
#include "Account.h"
class Bank
{
public:
	void MakeAccount(std::string name, std::string number, int bal);
	void SetDeposite(std::string number, int money);
	void ShowAllAccount();
	static Bank& GetBank() {return bank;}
	~Bank();

private:
	static Bank bank;
	Bank();
	std::vector<Account> accounts;
};

