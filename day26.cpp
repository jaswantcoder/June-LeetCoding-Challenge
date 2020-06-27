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
#define pii pair<int,int>
#define fi first
#define se second
#define mp make_pair
class Solution {
public:
      
        int sumNumbers(TreeNode* root) {
        
            queue<pair<TreeNode*,int>> q;
            if(!root) return 0;
            
        int ans=0;
            q.push(mp(root,0));
            while(!q.empty())
            {
                    
               pair<TreeNode*,int> p= q.front();
                q.pop();
                    root=p.fi;
                if(!root->left && !root->right)
                    ans+=p.se*10+root->val;
                if(root->left)
                {
                    q.push(mp(root->left,p.se*10+root->val));
                }
                if(root->right)
                {
                     q.push(mp(root->right,p.se*10+root->val));
                }
                
                
            }
            return ans;
        
        
        
    }
};
