// 37-Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int>stack)
{
	while (!stack.empty())
	{
		cout << stack.top() << endl;
		stack.pop();
	}
}

int main()
{
	stack<int>numberstack;

	numberstack.push(1);
	numberstack.push(2);
	numberstack.push(3);

	/*numberstack.pop();
	numberstack.pop();
	numberstack.pop();*/

	if (numberstack.empty())
	{
		cout << "The Stack is Empty" << endl;
	}
	else
	{
		cout << "The Stack is not Empty" << endl;
	}

	cout << "The Stack Size is " << numberstack.size() << endl;

	printStackElements(numberstack);

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
