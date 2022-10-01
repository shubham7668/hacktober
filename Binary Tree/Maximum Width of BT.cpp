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
int maxWidth(Node *root){
	if(root == NULL)	return 0;
	queue<Node*> q;
	q.push(root);
	int res = 0;
	while(!q.empty())
	{
		int count =  q.size();
		res = max(res, count);
		for(int i = 0; i < count; i++)
		{
			Node *cur = q.front();
			q.pop();
			if(cur->left != NULL)
				q.push(cur->left);
			if(cur->right != NULL)
				q.push(cur->right);
		}
	}
	return res;
}
int main() {
	Node *root = new Node(10);
	root->left = new Node(20);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right = new Node(30);
	root->right->left = new Node(60);
	cout << maxWidth(root);
}