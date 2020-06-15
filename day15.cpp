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
    TreeNode* searchBST(TreeNode* root, int v) {
      
        if(!root) return NULL;
        
          queue<TreeNode*> q;
        q.push(root);
    
        while(!q.empty())
        {
            TreeNode * r=q.front();
            q.pop();
            if(r->val==v)
            {
                return r;
            }
            if(r->left)
            {
                q.push(r->left);
            }
            if(r->right)
                q.push(r->right);
        }
        return NULL;
        
    }
};
