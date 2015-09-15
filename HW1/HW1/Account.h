#pragma once
#include <string>
class Account
{
public:
	void Deposite(int money);
	void Withdraw(int money);
	std::string GetAccountName() { return accountName; }
	std::string GetAccountNumber() { return accountNumber; }
	int GetBalance() { return balance; }
	Account(std::string accountName, std::string accountNumber, int balance);
	~Account();
private:
	std::string accountName;
	std::string accountNumber;
	int balance;
};

