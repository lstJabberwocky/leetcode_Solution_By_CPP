#include <vector>
#include <iostream>
using  namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size()-1;
        while (left < right){
            if (numbers[left] + numbers[right] == target){
                int result[2] = {left+1,right+1};
                return vector<int>{result,result+2};
            }
            else if (numbers[left] + numbers[right] < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        throw invalid_argument("The input has no solution");
    }
};



int main()
{
    Solution s;
    vector<int> list = {1,2,3,4,5,6,7,8,9,10};
    auto res = s.twoSum(list,5);
    for (auto i : res)
    {
        cout<<i<<" ";
    }
}