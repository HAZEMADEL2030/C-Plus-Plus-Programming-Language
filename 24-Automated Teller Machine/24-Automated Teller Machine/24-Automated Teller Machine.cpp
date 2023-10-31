// 24-Automated Teller Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showMenu()
{
	cout << "**********MENU**********" << endl;

	cout << "1.Check Balance" << endl;
	cout << "2.Deposit" << endl;
	cout << "3.Withdraw" << endl;

	cout << "************************" << endl;
}

void selectedOption(int option)
{
	cout << "Processing" << endl;
	int balance = 1000;

	switch (option)
	{
	case 1:
		cout << "Your Balance is " << balance << "$" << endl;
		break;
	case 2:
		cout << "Enter the Deposit Amount ";
		int deposit;
		cin >> deposit;
		balance = balance + deposit;
		cout << "Your Balance is " << balance << "$" << endl;
		break;
	case 3:
		cout << "Enter the Withdraw Amount ";
		int withdraw;
		cin >> withdraw;
		if (withdraw < balance)
		{
			balance = balance - withdraw;
		}
		else
		{
			cout << "The Balance is not Enough";
		}
		cout << "Your Balance is " << balance << "$" << endl;
		break;
	default:
		cout << "Unsuccessful Transaction";
	}

}

int main()
{
	showMenu();
	cout << "Choose your Option ";
	int option;
	cin >> option;
	selectedOption(option);

	system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
