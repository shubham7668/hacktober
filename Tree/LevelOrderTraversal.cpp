/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


vector<vector<int>> levelOrder(Node* node)
{
  vector<vector<int>> vec; 
  queue<Node*> q;
    q.push(node); 
  while(!q.empty()){
    vector<int> v;
    int siz = q.size(); 
    for(int i=0;i<siz;i++){
        Node* top = q.front();
        v.push_back(top->data);
        q.pop(); 
        if(top->left!=NULL){
            q.push(top->left); 
        }
        if(top->right!=NULL){ 
            q.push(top->right); 
        }
        
    }
      vec.push_back(v); 
  }
  return vec; 
}
