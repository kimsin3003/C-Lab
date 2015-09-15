#include <iostream>
#include "Account.h"
#include "Bank.h"

int main() {

	Bank& bank = Bank::GetBank();

	bank.MakeAccount("���¿�", "131021", 0);

	bank.MakeAccount("�����", "141026", 0);

	bank.MakeAccount("�ۿ���", "141024", 0);

	bank.SetDeposite("131021", 1230000);
	bank.SetDeposite("141026", 50000);
	bank.SetDeposite("141024", 60000);

	bank.ShowAllAccount();
}