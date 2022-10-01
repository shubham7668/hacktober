#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *left, *right;
	
	Node(int k)
	{
		key = k;
		left = right = NULL;
	}
};
int isBalanced(Node *root){
	if(root == NULL)
		return 0;
	int lh = isBalanced(root->left);
	if(lh == -1)
		return -1;
	int rh = isBalanced(root->right);
	if(rh == -1)
		return -1;
	if( abs(lh - rh) > 1 )
		return -1;
	else 
		return max(lh, rh) + 1;
}
int main() {
	Node *root = new Node(8);
	root->left = new Node(12);
	root->left->left = new Node(13);
	root->left->right = new Node(14);
	root->right = new Node(15);
	root->right->right = new Node(16);
	root->right->right->right = new Node(17);
	cout << isBalanced(root);
}