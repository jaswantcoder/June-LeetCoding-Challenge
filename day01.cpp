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

void reverse_(TreeNode*root)
{
    if(!root) return;
    TreeNode* l=root->left;
    TreeNode* r=root->right;
    reverse_(l);
    reverse_(r);
   root->left=r;
    root->right=l;
    return;
   
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
    
        reverse_(root);
        
        return root;
        
        
        
    }
};
