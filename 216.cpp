#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> result;
    void solve(int start,int remainVal,vector<int>& path,int lenLimit)
    {
        if(remainVal==0 && path.size()==lenLimit)
        {
            result.push_back(path);
            return;
        }
        if (remainVal<0)
        {
            return;
        }
        for (int i=start;i<10;i++)
        {
            path.push_back(i);
            solve(i+1,remainVal - i,path,lenLimit);
            path.pop_back();
        }

    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(1,n,temp,k);
        return result;
    }
};