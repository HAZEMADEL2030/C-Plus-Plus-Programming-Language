// 09-Switch case statement Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the First Number";
	float number1;
	// It allow user to enter the First operand
	cin >> number1;
	cout << "Enter the Second Number";
	float number2;
	// It allow user to enter the Second operand
	cin >> number2;

	cout << "Enter the Operator";
	char operate;
	// It allows user to enter operator i.e. +, -, *, /
	cin >> operate;


	// Switch statement begins
	switch (operate) {

		// If user enter +
	case '+':
		cout << number1 + number2;
		break;

		// If user enter -
	case '-':
		cout << number1 - number2;
		break;

		// If user enter *
	case '*':
		cout << number1 * number2;
		break;

		// If user enter /
	case '/':
		cout << number1 / number2;
		break;

		// If the operator is other than +, -, * or /,
		// error message will display
	default:
		cout << "Error! operator is not correct";
		break;
	} // switch statement ends

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
