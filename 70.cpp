#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> memo;
    int solve(int n){

        if (n == 1) return 1;
        if (n == 2) return 2;

        if  (memo[n] == -1)
        {
            memo[n] = solve(n-1) + solve(n-2);
        }

        return memo[n];
        


    };

    int climbStairs(int n) {
        memo = vector<int>(n+1, -1);
        return solve(n);

    };
};


int main(){
    Solution s;

    cout << s.climbStairs(40);

    
}