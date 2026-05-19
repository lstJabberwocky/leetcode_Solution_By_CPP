#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());

        int gIndex = 0;
        int sIndex = 0;
        while (gIndex < g.size() && sIndex < s.size())
        {
            if (g[gIndex] <= s[sIndex]){
                
                sIndex++;

               
            }

           gIndex++;


            
        }
        
return sIndex;



    }
};