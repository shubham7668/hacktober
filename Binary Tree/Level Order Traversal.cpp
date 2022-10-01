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
void printLevel(Node *root){
	if(root == NULL)	return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node *curr = q.front();
		q.pop();
		cout << curr->key << " ";
		if(curr->left != NULL)
			q.push(curr->left);
		if(curr->right != NULL)
			q.push(curr->right);
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(15);
	root->left->left = new Node(30);
	root->right = new Node(20);
	root->right->left = new Node(40);
	root->right->left->left = new Node(60);
	root->right->left->right = new Node(70);
	root->right->right = new Node(50);
	printLevel(root);
}