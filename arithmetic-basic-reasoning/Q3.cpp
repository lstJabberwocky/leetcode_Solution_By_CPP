#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        int size = s.size();
        for (int index = 0; index < ceil(size / 2); index++)
        {
            if (s[index] != s[size - index-1])
            {
                return false;
            }
        }
        return true;


    }
};