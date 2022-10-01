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
void printLeft(Node *root){
	if(root == NULL)	return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int cnt = q.size();
		for(int i = 0; i < cnt; i++)
		{
			Node *cur = q.front();
			q.pop();
			if(i == 0)
				cout << cur->key << " ";
			if(cur->left != NULL)
				q.push(cur->left);
			if(cur->right != NULL)
				q.push(cur->right);
		}
	}
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);
	printLeft(root);
}