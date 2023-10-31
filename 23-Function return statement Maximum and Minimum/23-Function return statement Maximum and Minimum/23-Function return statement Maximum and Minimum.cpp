// 23-Function return statement Maximum and Minimum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int maximum(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}


int minimum(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}

int main()
{
	cout << "Enter the First Number";
	int number1;
	cin >> number1;
	cout << "Enter the Second Number";
	int number2;
	cin >> number2;



	// Calling above function to find maximum of 'number1' and 'number2'
	int max = maximum(number1, number2);
	// Calling above function to find minimum of 'number1' and 'number2'
	int min = minimum(number1, number2);

	cout << "The Maximum Number is " << max << endl;
	cout << "The Minimum Number is " << min << endl;

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
