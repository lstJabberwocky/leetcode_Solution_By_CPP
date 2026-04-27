#include <bits/stdc++.h>
using namespace std;





struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* temp = root;
        if (temp == nullptr)
        {
            return vector<vector<int>>();
        }
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(temp);
        while(!q.empty())
        {
            vector<int> thisLoopResult;
            int qSize = q.size();

            for (int i = 0; i < qSize; i++)
            {

                TreeNode* node = q.front();
                q.pop();
                thisLoopResult.push_back(node->val);
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }

            }

            result.push_back(thisLoopResult);
        }
        return result;
    }
};