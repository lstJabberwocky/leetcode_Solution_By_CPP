#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> memo;

    int solve(int n ){

        int res = INT_MAX;

        if (memo[n] != -1){
            return memo[n];
        }


        for(int i = 1 ; i*i <= n ; i++){

            res = min(res,solve(n-i*i)+1 );

        }

        memo[n]  = res;

        return res; 



    }


    int  numSquares(int n){

        memo =  vector<int>(n+1,-1);
        memo[1] = 1;
        memo[0] = 0;

        return solve(n);


    }
};


int main(){
    Solution s;

    cout  << s.numSquares(13);


}