#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int col;
    int row;
    int islandCount = 0;
    vector<pair<int,int>> upRightDownLeft = {{-1,0},{0,1},{1,0},{0,-1}};

    void solve(vector<vector<char>>& grid,int y,int x)
    {
        if (grid[y][x] == '0')
        {
            return;
        }
        grid[y][x] = '0';

        //pair<y,x> , 在没超出图大小的情况下,所有下一步的坐标

        for (auto i : upRightDownLeft)
        {
            int nextY = y + i.first;
            int nextX = x + i.second;
            if (nextX < 0 || nextY < 0 || nextX >= col || nextY >= row)
            {
                continue;
            }

            if (grid[nextY][nextX] == '0')
            {
                continue;
            }

            solve(grid,nextY,nextX);
        }









    }


public:
    int numIslands(vector<vector<char>>& grid) {
        row = grid.size();
        col = grid[0].size();
        vector<pair<int,int>> path;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    islandCount++;
                    solve(grid,i,j);
                }
            }
        }
        return  islandCount;
    };


};

