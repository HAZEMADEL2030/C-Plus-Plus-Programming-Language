// 07-Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the First Number";
	int number1;
	cin >> number1;
	cout << "Enter the Second Number";
	int number2;
	cin >> number2;

	// Addition operator
	cout << "number1 + number2 = " << (number1 + number2) << endl;

	// Subtraction operator
	cout << "number1 - number2 = " << (number1 - number2) << endl;

	// Multiplication operator
	cout << "number1 * number2 = " << (number1 * number2) << endl;

	// Division operator
	cout << "number1 / number2 = " << (number1 / number2) << endl;

	// Modulo operator
	cout << "number1 % number2 = " << (number1 % number2) << endl;



	// Equal to operator
	cout << "number1 == number2 is " << (number1 == number2) << endl;

	// Greater than operator
	cout << "number1 > number2 is " << (number1 > number2) << endl;

	// Greater than or Equal to operator
	cout << "number1 >= number2 is " << (number1 >= number2) << endl;

	//  Lesser than operator
	cout << "number1 < number2 is " << (number1 < number2) << endl;

	// Lesser than or Equal to operator
	cout << "number1 <= number2 is " << (number1 <= number2) << endl;

	// true
	cout << "number1 != number2 is " << (number1 != number2) << endl;



	// Logical AND operator
	cout << "number1 && number2 is " << (number1 && number2) << endl;

	// Logical OR operator
	cout << "number1 ! number2 is " << (number1 > number2) << endl;

	// Logical NOT operator
	cout << "!number2 is " << (!number2) << endl;



	// Assignment Operator
	cout << "number1 = " << number1 << endl;

	//  Add and Assignment Operator
	cout << "number1 += number2 is " << (number1 += number2) << endl;

	// Subtract and Assignment Operator
	cout << "number1 -= number2 is " << (number1 -= number2) << endl;

	//  Multiply and Assignment Operator
	cout << "number1 *= number2 is " << (number1 *= number2) << endl;

	//  Divide and Assignment Operator
	cout << "number1 /= number2 is " << (number1 /= number2) << endl;

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
