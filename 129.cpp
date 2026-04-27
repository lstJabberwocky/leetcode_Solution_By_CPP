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
    using  bav = pair<TreeNode*,vector<int>>;
public:
    int sumNumbers(TreeNode* root)
    {
        vector<vector<int>> res;
        queue<bav> DFS;
        vector<int> temp;

        DFS.push({root, temp});



        while(!DFS.empty())
        {
            bav b = DFS.front();
            DFS.pop();

            auto node = b.first;
            auto vec = b.second;
            vec.push_back(node->val);

            if (node->right != nullptr)
            {
                DFS.push({node->right, vec});
            }

            if (node->left != nullptr)
            {
                DFS.push({node->left, vec});
            }

            if (node->left == nullptr && node->right == nullptr )
            {
                res.push_back(vec);
            }

        }

        int finalRes = 0;

        for (auto i : res)
        {
            string temp = "";
            for (auto j : i)
            {
                temp += to_string(j);
            }
            int sum = stoi(temp);
            finalRes += sum;
        }
    return finalRes;

    }
};