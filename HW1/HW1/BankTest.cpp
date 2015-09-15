#include <iostream>
#include "Account.h"
#include "Bank.h"

int main() {

	Bank& bank = Bank::GetBank();

	bank.MakeAccount("±èÅÂ¿ì", "131021", 0);

	bank.MakeAccount("±è¸íÂù", "141026", 0);

	bank.MakeAccount("¼Û¿ø¼®", "141024", 0);

	bank.SetDeposite("131021", 1230000);
	bank.SetDeposite("141026", 50000);
	bank.SetDeposite("141024", 60000);

	bank.ShowAllAccount();
}