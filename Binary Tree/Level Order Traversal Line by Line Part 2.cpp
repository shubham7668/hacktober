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
void printLevelOrderLine(Node *root){
	if(root == NULL)	return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int count = q.size();
		for(int i = 0; i < count; i++)
		{
			Node *curr = q.front();
			q.pop();
			cout << curr->key << " ";
			if(curr->left != NULL)	q.push(curr->left);
			if(curr->right != NULL)	q.push(curr->right);
		}
		cout << "\n";
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right = new Node(30);
	root->right->right = new Node(60);
	printLevelOrderLine(root);
}