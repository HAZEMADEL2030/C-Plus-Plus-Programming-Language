// 34-Arrays Single vs Multi Dimensional.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// Single Dimentional Array
	cout << "Single Dimensional Array" << endl;
	int array[5] = { 10,20,30,40,50 };
	for (int n : array)
	{
		cout << n << endl;
	}

	for (int n : array)
	{
		cout << &n << endl;
	}


	// Multi Dimentional Array
	cout << "Multi Dimensional Array" << endl;
	int array2[5][5] = { 10,20,30,40,50,10,20,30,40,50,10,20,30,40,50,10,20,30,40,50,10,20,30,40,50 };
	for (int i = 0; i < 5; ++i) {

		for (int j = 0; j < 5; ++j) {
			cout << array2[i][j] << endl;
		}
	}

	for (int i = 0; i < 5; ++i) {

		for (int j = 0; j < 5; ++j) {
			cout << &array2[i][j] << endl;
		}
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
