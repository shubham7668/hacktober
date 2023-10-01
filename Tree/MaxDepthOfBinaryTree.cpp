//User function template for C++

/*
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
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
       int len= 0; 
    queue<Node*> q; 
    q.push(node);
    while(!q.empty()){
        int siz= q.size(); 
            len++; 
        for(int i=0;i<siz;i++){

            Node* tp = q.front(); 
            q.pop(); 
            if(tp->left!=NULL){
                q.push(tp->left); 
            }
            if(tp->right!=NULL){
                q.push(tp->right); 
            }
        }
    }
    return len; 
    }
};
 int he(Node *node){
         if(node){
             int lh = he(node->left); 
             int rh = he(node->right); 
            
             int heiht = max(lh,rh);
        return heiht + 1;
      }
    return 0;
    }
