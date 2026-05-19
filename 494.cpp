#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        


        
        vector<bool> memo = vector<bool>(target + 1 , false);

        memo[0] = true;

        for (int i : nums){

            for (int j = target; j >= i ; j--){
                memo[j] = memo[j] || memo[j-i] || memo[j + i]  ;
            }

        }

        
        return memo[target];
        


    }
};