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
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>vec;
        stack<TreeNode*> st;
        TreeNode* pcurr=root;
        
        while(!st.empty() || pcurr){
            if(pcurr){
            st.push(pcurr);
            pcurr=pcurr->left;
            }else{
                TreeNode* pnode=st.top();
                vec.push_back(pnode->val);
                st.pop();
                pcurr=pnode->right;
            }
        }
        
        return vec;
    }
};