// 25-Generic functions and templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// One function works for all data types.
// This would work even for user defined types
// if operator '>' is overloaded
template <typename T>

T maximum(T x, T y)
{
	return (x > y) ? x : y;
}

template <typename T>


T minimum(T x, T y)
{
	return (x < y) ? x : y;
}





int main()
{
	cout << "Enter the First Variable";
	char first;
	cin >> first;
	cout << "Enter the Second Variable";
	char second;
	cin >> second;

	// Call maximum for int
	cout << maximum<int>(first, second) << endl;

	// call maximum for double
	cout << maximum<double>(first, second) << endl;

	// call maximum for char
	cout << maximum<char>(first, second) << endl;


	// Call minimum for int
	cout << minimum<int>(first, second) << endl;

	// call minimum for double
	cout << minimum<double>(first, second) << endl;

	// call minimum for char
	cout << minimum<char>(first, second) << endl;


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
