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
    vector<string> binaryTreePaths(TreeNode* root)
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

        vector<string> finalRes;

        for (auto intList : res)
        {
            string temp;
            for (int index = 0; index < intList.size(); index++)
            {
                    temp += to_string(intList[index]);
                    if (index == intList.size() - 1)
                    {
                        break;
                    }
                    temp += "->";

            }
            finalRes.push_back(temp);
        }
        return finalRes;


    }
};