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
     TreeNode* Construct(vector<int>& preorder, int min, int max)
    {
        if(min>max)
            return NULL;
        TreeNode* root = new TreeNode(preorder[min]);
        int i;
        for(i=min;i<=max;++i)
        {
            if(preorder[i]>root->val)
                break;
        }
        root -> left = Construct(preorder, min + 1, i - 1);
        root -> right = Construct(preorder, i, max);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return Construct(preorder, 0, preorder.size()-1);
    }
};
