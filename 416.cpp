#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum = 0;
        for (int i : nums){
            sum += i;
        }

        if (sum % 2 == 1){
            return false;
        }

        int target = sum / 2;


        vector<bool> memo = vector<bool>(target + 1 , false);

        memo[0] = true;

        for (int i : nums){

            for (int j = target; j >= i ; j--){
                memo[j] = memo[j] || memo[j-i];
            }

        }
        return memo[target];
        
    }
};




