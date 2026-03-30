//
// Created by lenovo on 2026/3/29.
//
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0    ,right = -1; //[left,right]
        int sum = 0;
        int minLength = nums.size() + 1;

        while (left < nums.size())
        {
            if ( right +1 < nums.size() && sum < target)
            {
                right++;
                sum += nums[right];
            }
            else
            {
                sum -= nums[left];
                left++;
            }
            if (sum >= target)
            {
                minLength = min(minLength,right - left +1);
            }

        }
        if (minLength == nums.size() + 1)
        {
            return  0;
        }
        return minLength;
    }
};

int main()
{
    Solution s;
    vector<int> v = {2,1,2,3,4,5};
    cout << s.minSubArrayLen(12,v);
}
