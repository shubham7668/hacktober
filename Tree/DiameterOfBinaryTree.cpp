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
}; */

class Solution {
  public:
  
  int dia=0; 
  int height(Node* node){
      if(node == NULL){
          return 0; 
      }
      int lh= height(node->left); 
      int rh= height(node->right); 
      dia = max(dia, lh+rh); 
      return (1+max(lh,rh)); 
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        
        int h = height(root); 
        return dia+1; 
    }
};
