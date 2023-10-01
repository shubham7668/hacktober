class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        stack<Node*> st; 
        Node* node = root; 
        vector<int> ans;  
        while(true){
            if(node!=NULL){
                st.push(node); 
                node = node->left; 
            }
            else{
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                ans.push_back(node->data);
                node = node->right; 
            }
        }
        return ans; 
    }
};