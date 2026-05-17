#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> memo;

    int res = 0;

    void solve(vector<int>& nums){
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if (nums[j] < nums[i])
                {
                    memo[i] = max(memo[i] , memo[j] + 1);
                }
            }
            res = max(res, memo[i]);
        }


    }

    int lengthOfLIS(vector<int>& nums) {
        memo = vector<int>(nums.size(),1);
        solve(nums);
        return res;
    }
};


int main()
{
    Solution s;
    vector<int> nums  = {10,9,2,5,3,7,101,18};
    cout << s.lengthOfLIS(nums);

}