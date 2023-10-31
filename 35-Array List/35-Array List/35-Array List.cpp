// 35-Array List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
	//creating the list 'mylist' having integer values in it
	list<int>mylist = { 10, 20, 30, 40, 50 };
	//pushing the elements at the starting and last
	mylist.push_back(60);
	mylist.push_front(0);
	//printing of the list elements after pushing
	list <int> ::iterator it;
	cout << "Elements after insertion are as follows : " << endl;
	for (it = mylist.begin(); it != mylist.end(); it++)
		cout << *it << '\n';
	//popping the elements from the last
	mylist.pop_back();
	//printing the list elements after pop
	cout << "Elements after deletion  are as follows : " << endl;
	for (it = mylist.begin(); it != mylist.end(); it++)
		cout << *it << '\n';
	cout << "Elements after insertion at particular position are as follows: " << endl;
	//searching the element '10' in the list and then inserting the element before it
	auto i = find(mylist.begin(), mylist.end(), 10);
	if (i != mylist.end()) {
		mylist.insert(i, 90);
	}
	//printing the elements after the new insertion
	for (it = mylist.begin(); it != mylist.end(); it++)
		cout << *it << '\n';

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
