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
    int rec(TreeNode* root,int val){
        if(root == NULL)
            return val-1;
        //cout<<val<<" "<<root->val<<endl;
        return max(rec(root->left, val+1), rec(root->right, val+1));
    }
    
    int maxDepth(TreeNode* root) {
        return rec(root,1);
    }
};
