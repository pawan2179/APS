#include<bits/stdc++.h>
using namespace std;

typedef struct Node {
	int data;
	Node *left;
	Node *right;
} Node;

//Keeps track of node previous node returned in backtracking
Node *temp = NULL;

Node *newNode(int val) {
	Node *newnode = (Node *)malloc(sizeof(Node*));
	newnode->data = val;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}

Node *kthAncestor(Node *root, int val, int &k) {
	if (root == NULL)    return root;

	if (root->data == val ||
	        (temp = kthAncestor(root->left, val, k)) ||
	        (temp = kthAncestor(root->right, val, k))) {

		if (k > 0)    k--;
		else if (k == 0) {
			cout << root->data << endl;
			return NULL;
		}

		return root;
	}
	return NULL;
}

int main() {

	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	int k = 2;
	int node = 5;

	// print kth ancestor of given node
	Node* parent = kthAncestor(root, node, k);

	// check if parent is not NULL, it means
	// there is no Kth ancestor of the node
	if (parent)
		cout << "-1";

	return 0;
}