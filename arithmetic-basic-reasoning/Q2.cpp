#include <bits/stdc++.h>
using namespace std;

class Solution {


public:
    int sumBE(int begin,int end)
    {
        int sum=0;
        for(int i=begin;i<=end;i++)
        {
            sum+=i;
        }
        return sum;
    }


    int pivotInteger(int n) {
        if (n==1)return 1;

            for (int i = ceil(n/2); i < n; i++)
            {
                if (sumBE(1,i) == sumBE(i,n))
                {
                    return i;
                }
            }
        return -1;
    }
};
