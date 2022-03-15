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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        map<TreeNode*, bool> visited;
        vector<int> ans;
        if(root == NULL)
            return ans;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* check = s.top();
            if(check -> left != NULL && !visited[check])
            {
                s.push(check -> left);
                visited[check] = true;
            }
            else
            {
                ans.push_back(check -> val);
                //cout<<check -> val;
                TreeNode* temp = NULL;
                if(check -> right != NULL)
                    temp = check -> right;
                s.pop();
                if(temp)
                {
                    s.push(temp);
                }
            }
        }
        return ans;
        
    }
};
