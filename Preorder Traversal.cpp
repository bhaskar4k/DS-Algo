// Recursive Approach

#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

void preorder_traversal(struct Node* node, vector<int> &ans){
    if(node==NULL) return;

    ans.push_back(node->data);
    preorder_traversal(node->left,ans);
    preorder_traversal(node->right,ans);
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    vector<int> ans;
    preorder_traversal(root,ans);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// Iterative Approach
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode *node=st.top();
            st.pop();

            if(node->right!=NULL){
                st.push(node->right);
            }
            if(node->left!=NULL){
                st.push(node->left);
            }

            ans.push_back(node->val);
        }
        return ans;
    }
};