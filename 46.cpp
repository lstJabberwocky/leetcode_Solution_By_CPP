//
// Created by lenovo on 2026/4/29.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {

    vector<vector<int>> result;

    void solve(vector<int> &nums,vector<bool> used,vector<int>&zuhe)
    {
        if (zuhe.size() == nums.size())
        {
            result.push_back(zuhe);
        }
        for (int i=0;i<nums.size();i++)
        {
            if (used[i])
            {
                continue;
            }
            used[i]=true;
            int num=nums[i];
            zuhe.push_back(num);
            solve(nums,used,zuhe);
            zuhe.pop_back();
            used[i]=false;
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> res;
        vector<bool> used(nums.size(),false);
        solve(nums,used,res);
        return result;
    }
};