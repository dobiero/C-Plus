//Bank.cpp : Simple Banking Application
//Author: Daniel Obiero

#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main(int argc, char* argv[])
{
	//Variables
	double balance, deposit, withdraw;
	int option;

	//Default Balance Amount
	balance = 500; //Default Amount

	//Display this menu 
	do
	{
		cout << "\n\t********Main Menu********";
		cout << "\n\t 1. Check Balance        ";
		cout << "\n\t 2. Deposit              ";
		cout << "\n\t 3. Withdraw             ";
		cout << "\n\t 4. Transfer             ";
		cout << "\n\t 5. Exit                 ";
		cout << "\n\t                         ";
		cout << "\n\t*************************";
		cout << "\n\t Selecet From Above Options ";
		cin >> option;

		switch (option) {
		case 1: cout << "\n\t Your Balance: $ " << balance << endl;
			break;

		case 2: cout << "\n\t Deposit Amount: $";
			cin >> deposit;
			balance += deposit;
			cout << "\n\t Current Balance: $" << balance << endl;
			break;

		case 3: cout << "\n\t How much do you want to withdraw?: $";
			cin >> withdraw;

			if (balance < withdraw)
				cout << "\n\t Insufficient Balance for Withdrawal" << endl;
			else
			{
				balance -= withdraw;
				cout << "\n\t Current Balance: $" << balance << endl;
				break;

			}
					
		default: if (option != 5)
		{
			cout << "\n\t Invalid Option. Choose 1 - 5" << endl;
			break;
					}
		}

		//By selecting 5 the menu exits
	} while (option != 5);

	system("pause");
	return 0;

}


