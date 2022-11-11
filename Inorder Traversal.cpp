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
private:
    // Recursive Approach
    void ex(TreeNode* node, vector<int> &ds){
        if(node==NULL){
            return;
        }
        
        ex(node->left,ds);
        ds.push_back(node->val);
        ex(node->right,ds);
    }
    
public:
    // Iterative Approach
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }

        stack<TreeNode*> st;
        TreeNode *node=root;

        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }else{
                if(st.empty()) break;
                node=st.top();
                st.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
    }
};