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
    bool isBalanced(TreeNode* root) {
        bool result = true;
        traverse(root, result);
        return result;    
    }

    int traverse(TreeNode* root , bool& result){
        if(root == nullptr) return 0;

        int left_height = traverse(root->left, result);
        int right_height = traverse(root->right, result);


        if(abs(left_height - right_height) > 1) result = false;

        return 1 + max(left_height, right_height);
    }
};
