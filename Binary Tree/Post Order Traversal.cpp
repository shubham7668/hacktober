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
void postOrder(Node *root){
	if(root!= NULL)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout << root->key << " ";
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	postOrder(root);
}