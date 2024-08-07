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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> finalans;
        if(root == NULL) return finalans;
        
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* newnode= st.top();
            st.pop();
            finalans.push_back(newnode->val);
            if(newnode->right != NULL)
            {
                st.push(newnode->right);
            }
            if(newnode->left != NULL)
            {
                st.push(newnode->left);
            }
        }
        return finalans;
        
    }
};