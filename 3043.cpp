#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;
        s.reserve(arr1.size() * 9);
        for (int x : arr1)
            for (; x; x /= 10)
                s.insert(x);

        int maxLen = 0;
        for (int y : arr2) {
            int len = 1
                + (y >= 10)
                + (y >= 100)
                + (y >= 1000)
                + (y >= 10000)
                + (y >= 100000)
                + (y >= 1000000)
                + (y >= 10000000)
                + (y >= 100000000)
                + (y >= 1000000000);

            int cur = y;
            for (int i = 0; i < len; ++i) {
                if (s.count(cur)) {
                    int curLen = len - i;
                    if (curLen > maxLen) maxLen = curLen;
                    break;
                }
                cur /= 10;
            }
        }
        return maxLen;
    }
};
