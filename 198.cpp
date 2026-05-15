#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:

    vector<int>memo;

    int solve(vector<int>& nums,int end){

       if (end < 0) {
            return 0;
        }

        if (end == 0 ){
            return nums[0];
        }


        if (memo[end] != -1){
            return memo[end];
        }

        memo[end] = max(solve(nums,end-2)+nums[end],solve(nums,end-1));

        return memo[end];


    }

    int rob(vector<int>& nums) {
        
        memo = vector<int>(nums.size(),-1);

        return solve(nums,nums.size()-1);
    }
};