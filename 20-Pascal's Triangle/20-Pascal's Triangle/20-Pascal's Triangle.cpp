// 20-Pascal's Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the Number of Rows: ";
	int rows;
	cin >> rows;

	int space;
	int pascal = 1;

	for (int i = 0; i < rows; i++) {
		for (int space = 1; space <= rows - i; space++)
			cout << "  ";

		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == 0)
				pascal = 1;
			else
				pascal = pascal * (i - j + 1) / j;

			cout << pascal << "   ";
		}
		cout << endl;
	}

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
