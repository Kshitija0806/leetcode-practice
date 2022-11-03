/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // vector<int> result;
    vector<int> preorderTraversal(TreeNode* root) {
        //This is the recursive way of doing preorder
//         vector<int> v;
//         if(root==NULL)return v;
        
//             result.push_back(root->val);
//             preorderTraversal(root->left);
//             preorderTraversal(root->right);
        
//         return result;
        
        //For the iterative way we will use stack data structure
        vector<int> preorder;
        if(root==NULL)return preorder;
        
        //Now initialize a stack
        stack<TreeNode*> st;
        //At the first step we have to push the root in the stack
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return preorder;
    }
};