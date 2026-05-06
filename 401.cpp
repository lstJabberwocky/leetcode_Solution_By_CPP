#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    void solve(int remainCount,vector<int> &path)
    {
        if (remainCount == 0)
        {
            result.push_back(path);
            return;
        }
        for (int i = 0; i < 10; i++)
        {
            path[i] = 1;
            solve(remainCount - 1, path);
            path[i] = 0;

        }
    }

    vector<vector<string>> binaryToTime(vector<vector<int>> &binaryTime)
    {
        for (vector<int> binary : binaryTime)
        {
            vector<int> hour{binary.begin(), binary.begin() + 4};
            vector<int> minute{binary.begin() + 4, binary.end()};
            int hour10;
            int minute10;
            for (int bin : hour)
            {

            }
        }
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<int> temp(10 ,0);
        solve(turnedOn, temp);
    }
};