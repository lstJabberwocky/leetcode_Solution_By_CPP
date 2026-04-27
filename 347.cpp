#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //pair<num,frequent>
        auto cmp = [](pair<int, int> p1, pair<int, int> p2)
        {
            return p1.second < p2.second;
        };

        //num,frequent
        unordered_map<int, int> mp;

        for (int i : nums)
        {
            mp[i]++;
        }

        priority_queue<pair<int, int> , vector<pair<int, int>> ,decltype(cmp)> pq(cmp);

        for (unordered_map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            pq.push(make_pair(it->first,it->second));
        }

        vector<int> result;

        for (int _ = 0; _ < k; _++)
        {
            auto res = pq.top();
            pq.pop();
            result.push_back(res.first);
        }

        return result;


    }

};