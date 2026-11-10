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
    int diameterOfBinaryTree(TreeNode* root) {
        int max_diameter = 0;
        traverse(root, max_diameter);
        return max_diameter;
    }

    int traverse(TreeNode* root, int& max_diameter){
        if(root == NULL)
            return 0;
        else{
            int left_max = traverse(root->left, max_diameter);
            int right_max = traverse(root->right, max_diameter);

            max_diameter = max(max_diameter, left_max + right_max);

            return 1 + max(left_max,right_max);
        }
    }
};
