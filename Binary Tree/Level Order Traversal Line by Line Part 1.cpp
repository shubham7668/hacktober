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
	q.push(NULL);
	while(q.size() > 1)
	{
		Node *curr = q.front();
		q.pop();
		if(curr == NULL)
		{
			cout << "\n";
			q.push(NULL);
			continue;
		}
		cout << curr->key << " ";
		
		if(curr->left != NULL)	q.push(curr->left);
		if(curr->right != NULL)	q.push(curr->right);
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->left->left = new Node(40);
	root->right = new Node(30);
	printLevelOrderLine(root);
}