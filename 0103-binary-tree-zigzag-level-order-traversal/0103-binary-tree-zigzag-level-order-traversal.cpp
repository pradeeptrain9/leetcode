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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        int ch=1;
        stack<int>st;
        vector<int>cur;
        while(!q.empty())
        {
            auto f = q.front();
            
            q.pop();
            if(f==NULL)
            {
                if(!q.empty())
                {
                    if(!st.empty())
                    {
                        while(!st.empty())
                        {
                            cur.push_back(st.top());
                            st.pop();
                        }
                    }
                    ans.push_back(cur);
                    cur=vector<int>();
                    q.push(NULL);
                    ch=ch^1;
                }
                else break;
                
            }
            else
            {
                //cout<<f->val<<" ";
                if(ch) cur.push_back(f->val);
                else st.push(f->val);
                
                if(f->left!=NULL) q.push(f->left);
                if(f->right!=NULL) q.push(f->right);
            }
        }
        while(!st.empty())
        {
            cur.push_back(st.top());
            st.pop();
        }
        ans.push_back(cur);
        return ans;
    }
};