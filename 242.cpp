//
// Created by lenovo on 2026/3/31.
//

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> maps;
        unordered_map<char,int> mapt;
        for (char i : s )
        {
            maps[ i ]++;
        }
        for ( char i : t )
        {
            mapt[ i ]++;
        }
        return maps == mapt;
    }
};

int main()
{
    Solution s;
    string a = "anagram";
    string b = "nagaram";
    cout << s.isAnagram(a,b) << endl;
    return 0;
}