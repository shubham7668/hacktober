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
Node *prv = NULL;

Node *BTToDLL(Node *root){
	if(root == NULL)	return root;
	Node *head = BTToDLL(root->left);
	if(prv == NULL)	{head = root;}
	else
	{
		root->left = prv;
		prv->right = root;
	}
	prv = root;
	BTToDLL(root->right);
	return head;
}
int main() {
	Node *root;
}