# include <iostream>
# include <map>
# include<unordered_map>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int map[256] = {0};
        int length = 0;
        int left = 0,right = -1;
        int tempLength = 0;
        while (right +1  < s.length() )
        {
            right++;
            char currentChar = s[right];
            int currentCharASCII = int(currentChar);
            if (map[currentCharASCII] == 0)
            {
                right++;
                tempLength++;
                map[currentCharASCII]++;
                length = max(length,tempLength);
            }
            else
            {
                tempLength = 0;
                map[currentCharASCII]--;
                left = right;
            }
        }
        return length;
        
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("asdfsdfghj") << endl;
}