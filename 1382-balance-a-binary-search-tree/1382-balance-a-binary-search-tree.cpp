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
    void inorder(TreeNode* root,vector<int>&n)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,n);
        n.push_back(root->val);
        inorder(root->right,n);
    }
    TreeNode* balancedbst(int s,int e, vector<int>&n)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid = (e+s)/2;
        TreeNode*root = new TreeNode(n[mid]);
        root->left=balancedbst(s,mid-1,n);
        root->right=balancedbst(mid+1,e,n);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>inorderval;
        inorder(root,inorderval);
        return balancedbst(0,inorderval.size()-1,inorderval);
    }
};