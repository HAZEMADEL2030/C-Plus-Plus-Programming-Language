// 38-Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;

void printQueueElements(queue<int>queue)
{
	while (!queue.empty())
	{
		cout << queue.front();
		queue.pop();
	}
	cout << endl;
}

int main()
{
	queue<int>numberqueue;

	numberqueue.push(1);
	numberqueue.push(2);
	numberqueue.push(3);

	cout << "The Size of the Queue is " << numberqueue.size() << endl;
	cout << "The First Element of the Queue is " << numberqueue.front() << endl;
	cout << "The Last Element of the Queue is " << numberqueue.back() << endl;

	printQueueElements(numberqueue);

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
