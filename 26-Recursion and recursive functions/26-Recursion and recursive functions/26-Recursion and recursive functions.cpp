// 26-Recursion and recursive functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int recursion(int num1, int num2)
{
	if (num1 == num2)
	{
		return num1;
	}
	else
	{
		return num1 + recursion(num1 + 1, num2);
	}
}

int main()
{
	//summation between two numbers
	cout << "Enter the First Number";
	int number1;
	cin >> number1;
	cout << "Enter the Second Number";
	int number2;
	cin >> number2;

	cout << "The summation is " << recursion(number1, number2);

	/*int summation=0;
	for (int i = number1; i <= number2; i++)
	{
		summation += i;
	}
	cout << "The summation is " << summation;*/

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
