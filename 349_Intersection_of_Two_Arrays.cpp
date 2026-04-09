//
// Created by lenovo on 2026/3/31.
//
#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> record(nums1.begin(), nums1.end());
        set<int> resultSet;
        for (int i : nums2)
        {
            if (record.find(i) != record.end())
            {
                resultSet.insert(i);
            }

        }


        return vector<int>(resultSet.begin(), resultSet.end());;
    }
};
int main()
{
    cout<<"Hello World!"<<endl;
}