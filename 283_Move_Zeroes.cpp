#include <iostream>
#include <vector>
using namespace  std;

class  Solution
{
public:
    void moveZeroes(vector<long>& nums){
        vector<long> temp;
        long zeroCount = 0;
        for (long i : nums){
            if (i == 0)
            {
                zeroCount++;
            }
            else{temp.push_back(i);}

        }
        for (long i = 0 ; i < zeroCount ; i++){
            temp.push_back(0);
        }
        for (int i = 0 ; i < nums.size() ; i++)
        {
            nums[i] = temp[i];
        }
    }
};

int main(){
    long arr[] = {0,1,0,3,12};
    vector<long> nums{arr,arr + sizeof(arr)/sizeof(int)};
    Solution s;
    s.moveZeroes(nums);
    for (long i : nums)
    {
        cout<<i<<" ";
    }
}