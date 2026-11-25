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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> depth_vis;
        vector<int> res;
        traverse(root,0,depth_vis,res);
        return res;
    }

    void traverse(TreeNode* node, int depth, vector<int> &depth_vis, vector<int>& res){
        if(node == NULL) return;
        
        if(depth_vis.size() < depth + 1)
            depth_vis.push_back(0);
        
        if(depth_vis[depth] == 0){
            res.push_back(node->val);
            depth_vis[depth] = 1;
        }

        traverse(node->right,depth + 1,depth_vis,res);
        traverse(node->left, depth + 1, depth_vis, res);
    }
};
