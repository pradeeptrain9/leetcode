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
    
    
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int d=0;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* front=q.front();
            q.pop();
            if(front==NULL)
            {
                d++;
                
                if(!q.empty())
                {
                   q.push(NULL); 
                }
                continue;
                
            }
            
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
            
        }
        
        
        return d;
        
        
    }
};