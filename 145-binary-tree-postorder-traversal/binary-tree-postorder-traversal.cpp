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
    void postorder(vector<int>& list, TreeNode* root){
        if(root == nullptr){
            return;
        }
        postorder(list, root->left);
        postorder(list, root->right);
        list.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> list;
        postorder(list, root);
        return list;
    }
};