#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<vector<bool>> used;
    int height;
    int weight;
    vector<pair<int,int>> upRightDownLeft;
    bool res;
    void solve(vector<vector<char>>& board,string& word,int start,int row,int col)
    {
        if (res) return;

        if (board[row][col] != word[start]) return ;

            if (start == word.length() - 1)
        {
            res = true;
            return;
        }

            used[row][col] = true;
            for (auto WH : upRightDownLeft)
            {
                int nextR = row + WH.first;
                int nextC = col + WH.second;
                if (nextR >= height || nextC >= weight ||
                    nextC < 0 || nextR < 0)
                {
                    continue;
                }
                if (used[nextR][nextC] == true)
                {
                    continue;
                }


                solve(board,word,start+1,nextR,nextC);

            }
            used[row][col] = false;
        }




    bool exist(vector<vector<char>>& board, string word) {
        if (word.length() == 0)
        {
            return true;
        }

        height = board.size();
        weight = board[0].size();
        res = false;
        if (word.length() > height * weight)
        {
            return false;
        }

        upRightDownLeft = {{-1,0},{0,1},{1,0},{0,-1}};

        used = vector<vector<bool>>(height, vector<bool>(weight, false));
        int start = 0;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < weight; j++)
            {
                solve(board,word,start,i,j);
                if (res == true)
                {
                    return true;
                }
            }
        }
        return false;

    }
};