#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
vector<string> result;
void addPoint(string str,int start , int segment , vector<string>& path )
    {
        int remain = str.size() - start;
        int needPartCount = 4 - segment;
        if (remain < needPartCount || remain > 3*needPartCount)
        {
            return;
        }
        if (segment == 4 && start == str.size())
        {
            string ip = path[0];
            for (int i = 1;i < 4; i++)
            {
                ip += ".";
                ip += path[i];
            }
            result.push_back(ip);
        }
        if (segment == 4 || start == str.size())
        {
            return;
        }
    for (int len = 1; len <= 3; len++)
    {
        if (start + len > str.size())
        {
            continue;
        }
        string part = str.substr(start,len);
        if (part[0] == '0' && part.size() > 1)
        {
            continue;
        }
        if (stoi(part) >  255)
        {
            continue;
        }
        path.push_back(part);
        addPoint(str,start + len,segment +1,path);
        path.pop_back();
    }


    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> temp;
        addPoint(s,0,0,temp);
        return result;
    }
};