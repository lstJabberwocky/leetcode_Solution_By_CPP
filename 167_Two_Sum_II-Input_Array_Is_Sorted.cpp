#include <vector>
#include <iostream>
using  namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++)
        {
            int otherNumber = target - numbers[i];
            int otherIndex = BinarySearch(numbers,otherNumber,i+1);
            if (otherIndex != -1)
            {
                                result.push_back(i +1);
                result.push_back(otherIndex +1);

                return result;
            }
        }
        return  {};
    }


    int BinarySearch(vector<int>& numbers, int target,int lefta)
    {

        int left = lefta, right = numbers.size()-1;

        while (left <= right)
        {
            int mid = (left+right)/2;
            if (numbers[mid] == target)
            {
                return mid;
            }
            if (numbers[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }

        }
return -1;
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