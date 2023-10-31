// 40-Tree Traversal Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int data) {
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

void printTree(Node* root) {
	if (root == nullptr) return;

	//preorder algorithm (D,L,R)
	cout << root->data << endl;
	printTree(root->left);
	printTree(root->right);

	//inorder algorithm (L,D,R)
	/*printTree(root->left);
	cout << root->data << endl;
	printTree(root->right);*/

	//postorder algorithm (L,R,D)
	/*printTree(root->left);
	printTree(root->right);
	cout << root->data << endl;*/
}

int main()
{
	//Level 1
	Node* root = createNode(1);
	//Level 2
	root->left = createNode(2);
	root->right = createNode(3);
	//Level 3
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	//Level 4
	root->left->right->left = createNode(8);
	root->right->right->left = createNode(9);

	printTree(root);

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
