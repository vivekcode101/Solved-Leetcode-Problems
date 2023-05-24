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
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorderval;
        inorder(root,inorderval);
        int i =0,j=inorderval.size()-1;
        while(i<j)
        {
            int sol = inorderval[i]+inorderval[j];
            if(sol==k)
            {
                return true;
            }
            else if(sol>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};