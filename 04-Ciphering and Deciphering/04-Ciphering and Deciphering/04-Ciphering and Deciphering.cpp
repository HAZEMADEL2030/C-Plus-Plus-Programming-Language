// 04-Ciphering and Deciphering.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter five numbers" << endl;
	int n1, n2, n3, n4, n5;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << "The Message is : " << char(n1) << char(n2) << char(n3) << char(n4) << char(n5) << endl;


	cout << "Enter five Letters" << endl;
	char c1, c2, c3, c4, c5;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "The Numbers are : " << int(c1) << int(c2) << int(c3) << int(c4) << int(c5) << endl;

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
