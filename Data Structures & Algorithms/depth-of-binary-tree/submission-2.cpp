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

private:
    int depth = 1;

public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        traverse(root,1);
        return depth;
    }

    void traverse(TreeNode* root, int current_depth){
        if(root == NULL){
            if(depth < current_depth - 1){
                depth = current_depth - 1;
            }
        }
        else{
            traverse(root->left, current_depth + 1);
            traverse(root->right, current_depth + 1);
        }
    }
};
