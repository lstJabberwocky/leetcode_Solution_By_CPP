#include <bits/stdc++.h>
using namespace std;


class Solution {

public:



    vector<string> letterCombinations(string digits) {

        unordered_map<char , vector<string>> int_ch;
        int_ch[2] = {"a", "b", "c"};
        int_ch[3] = {"d", "e", "f"};
        int_ch[4] = {"g", "h", "i"};
        int_ch[5] = {"j", "k", "l"};
        int_ch[6] = {"m", "n", "o"};
        int_ch[7] = {"p", "q", "r", "s"};
        int_ch[8] = {"t", "u", "v"};
        int_ch[9] = {"w", "x", "y", "z"};


        vector<string> result = letterCombinations(digits.substr(0, digits.size() - 1));
        if (digits.size() >1)
        {
            vector<string> result = letterCombinations(digits.substr(0, digits.size() - 1));
        }
        else
        {
            vector<string> result;
            for (auto i : int_ch[digits.back()])
            {
                result.push_back(i);
            }
            return result;
        }





        
    }
};

