#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> q;

        for (char c : s)
        {
            if (q.empty())
            {
                q.push(c);
                continue;
            }
            char top = q.front();
            q.pop();
            if (c == '}')
            {
                if (top == '{')
                {
                    continue;
                }
            }
            else if (c == ']')
            {
                if (top == '[')
                {
                    continue;
                }
            }
            else if (c == ')')
            {
                if (top == '(')
                {
                    continue;
                }
            }
            q.push(top);
            q.push(c);
        }
    return q.empty();
    }
};