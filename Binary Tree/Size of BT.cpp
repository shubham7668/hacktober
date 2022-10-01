#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *left, *right;
	Node( int k )
	{
		key = k;
		left = right = NULL;
	}
};
int getSize(Node *root){
	if(root == NULL)
		return 0;
	else
		return 1 + getSize(root->left) + getSize(root->right);
}

int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right = new Node(30);
	root->right->right = new Node(60);
	cout << getSize(root);
}