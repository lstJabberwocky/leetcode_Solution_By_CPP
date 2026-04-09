//
// Created by lenovo on 2026/4/1.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> numIndexMap ;
        vector<int> result;
        for (int i  = 0; i < nums.size(); i++)
        {
            numIndexMap[nums[i]].push_back(i);
        }
        for (int i = 0; i <= target; i++)
        {
            if (numIndexMap.contains(i) && numIndexMap.contains(target - i) )
            {
                result.push_back(numIndexMap[i][0]);
                result.push_back(numIndexMap[target - i][0 ]);
                break;
            }
        }
        return result;

    }
};