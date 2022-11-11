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
        ex(node->right,ds);
        ds.push_back(node->val);
    }
    
public:
    // Iterative Approach
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        
        stack<TreeNode*> st1;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* node=st1.top();
            st1.pop();
            ans.push_back(node->val);
            
            if(node->left!=NULL){
                st1.push(node->left);
            }
            if(node->right!=NULL){
                st1.push(node->right);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};