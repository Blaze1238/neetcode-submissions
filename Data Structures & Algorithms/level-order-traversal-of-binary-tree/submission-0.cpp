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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        
        queue<TreeNode*> que;
        que.push(root);
        int nodes = 1;
        int next_level_nodes = 0;
        vector<int> sub;
        while(que.size() != 0){
            TreeNode* curr = que.front();
            que.pop();
            sub.push_back(curr->val);
            if(curr->left != NULL){
                que.push(curr->left);
                next_level_nodes++;
            }
            if(curr->right != NULL){
                que.push(curr->right);
                next_level_nodes++;
            }
            nodes--;
            if(nodes == 0){
                nodes = next_level_nodes;
                next_level_nodes = 0;
                res.push_back(sub);
                sub.clear();
            }
        }
        return res;
    }
};
