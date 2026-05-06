#include <bits/stdc++.h>
using namespace std;

class Solution {


public:
    vector<vector<int> > result;

    void solution(int start, int end,vector<int> &zuhe,int lenLimit)
    {
        if (zuhe.size() == lenLimit)
        {
            result.push_back(zuhe);
            return;
        }
        for (int i=start;i<=end-(lenLimit - zuhe.size())+1;i++)
        {

            zuhe.push_back(i);
            solution(i+1,end,zuhe,lenLimit);
            zuhe.pop_back();
        }

    }


    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        int lenLimit = k;
        solution(1,n,temp,k);
        return result;
    }
};