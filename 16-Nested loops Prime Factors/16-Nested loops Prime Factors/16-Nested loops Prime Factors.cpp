// 16-Nested loops Prime Factors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the Number";
	int number;
	cin >> number;

	// Print the number of 2s that divide number
	while (number % 2 == 0) {
		cout << 2;
		number = number / 2;
	}

	// number must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(number); i = i + 2) {
		// While i divides n, print i and divide n
		while (number % i == 0) {
			cout << i;
			number = number / i;
		}
	}

	// This condition is to handle the case when number
	// is a prime number greater than 2
	if (number > 2)
		cout << number;

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
