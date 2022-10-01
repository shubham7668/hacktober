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
int getMax(Node *root){
	if(root == NULL)
		return INT_MAX;
	else
		return max(root->key, max(root->left->key, root->right->key));
}
int main() {
	Node *root = new Node(20);
	root->left = new Node(80);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	cout << getMax(root);
}