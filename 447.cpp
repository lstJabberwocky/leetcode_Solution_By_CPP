//
// Created by lenovo on 2026/4/4.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    auto static  distance(vector<int> a, vector<int> b)
    {
         int x = a[0] - b[0];
        int y = a[1] - b[1];
        auto res = pow(x , 2.0) + pow(y , 2.0);
        // res = pow(res , 0.5);
        return res;
    };
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int res = 0;
        for ( int i = 0; i < points.size(); i++ )
        {
            unordered_map<int, int> record;
            for (int j = 0; j < points.size(); j++ )
            {
                if (j != i)
                {
                    record[distance(points[i], points[j])]++;
                }
            }
            for (unordered_map<int, int>::iterator it = record.begin();it != record.end();it++)
            {
                if (it->second >= 2)
                {
                    res +=( it->second) * (it->second - 1);
                }
            }

        }
        return res;
    }
};

int main()
{
    vector<vector<int>> points;
    vector<vector<int>> a =  {{0,0},{1,0},{2,0}};
    Solution s;

    cout<<s.numberOfBoomerangs(a)<<endl;
}