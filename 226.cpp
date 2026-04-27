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
    void swap(TreeNode *&a, TreeNode *&b)
    {
        TreeNode *t = a;
        a = b;
        b = t;
    }
    TreeNode* invertTree(TreeNode* root) {
        
    }
};