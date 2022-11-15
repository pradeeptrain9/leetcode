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
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        TreeNode* tr=root;TreeNode* tl=root;
        int hr=0,hl=0;
        while(tr){tr=tr->right;hr++;}
        while(tl){tl=tl->left;hl++;}
        if(hr==hl)return pow(2,hl)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};