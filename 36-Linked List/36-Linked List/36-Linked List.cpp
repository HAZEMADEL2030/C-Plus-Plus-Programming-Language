// 36-Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
};

void printList(Node* n)
{
	while (n != NULL)
	{
		cout << n->value << endl;
		n = n->next;
	}
}

void insertAtTheFront(Node** head, int newvalue)
{
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = *head;
	*head = newnode;
}

void insertAtTheBack(Node** head, int newvalue)
{
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return;
	}
	Node* last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
}

void insertAtTheMiddle(Node* previous, int newvalue)
{
	if (previous == NULL)
	{
		cout << "Previous Cannot be Null" << endl;
		return;
	}
	Node* newnode = new Node();
	newnode->value = newvalue;
	newnode->next = previous->next;
	previous->next = newnode;
}

int main()
{
	Node* head = new Node();
	Node* body = new Node();
	Node* tail = new Node();

	head->value = 1;
	head->next = body;
	body->value = 2;
	body->next = tail;
	tail->value = 3;
	tail->next = NULL;

	insertAtTheFront(&head, 0);
	insertAtTheMiddle(body, 8);
	insertAtTheBack(&head, 4);
	printList(head);

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
