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
//    vector<vector<int>> ret;

// void buildVector(TreeNode *root, int depth)
// {
//     if(root == NULL) return;
//     if(ret.size() == depth)
//         ret.push_back(vector<int>());
    
//     ret[depth].push_back(root->val);
//     buildVector(root->left, depth + 1);
//     buildVector(root->right, depth + 1);
// }

// vector<vector<int> > levelOrder(TreeNode *root) {
//     buildVector(root, 0);
//     return ret;
// }
    vector<vector<int> > levelOrder(TreeNode *root) {
    
//     vector<vector<int>> ans;
        
//         queue< TreeNode *>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             TreeNode *temp=q.front();
//             ans.push_back(temp->val);
//             q.pop();

//             if(temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if(temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
        
//         return ans;
        if(!root)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode *>q;
        
        q.push(root);
        while(!q.empty())
        {
            int hps = q.size();
            vector<int>lot;
            for(int i = 0;i<hps;i++)
            {                
                TreeNode *temp=q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }                 
                if(temp->right)
                 {
                q.push(temp->right);
                 }
                
                lot.push_back(temp->val);
            }
            ans.push_back(lot);
        }
        return ans;
}
};