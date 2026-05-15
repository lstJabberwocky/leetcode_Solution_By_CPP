#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<vector<int>> board;

    int boardYSize;
    int boardXSize;



    vector<pair<int,int>> upLeft = {{-1,0},{0,-1}};
    
    int solve(int m,int n){

        if (board[m][n] == -1){
            return 0 ;
        }

        if (m == 0 && n == 0){
            return 1;
        }


        if (board[m][n] > 0){
            return board[m][n];
        }


        for (auto i : upLeft){
            int nextY = m+i.first;
            int nextX = n + i.second;

            if (nextX < 0 || nextX >= boardXSize || nextY < 0 || nextY >= boardYSize){
                continue;
            }
            if (board[nextY][nextX] == -1){
                continue;
            }
            
            board[m][n] += solve(nextY,nextX);

        }


        return board[m][n];
    }


        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
        
        boardYSize = obstacleGrid.size();
        boardXSize = obstacleGrid[0].size();
        int m = boardYSize;
        int n = boardXSize;

        board = vector<vector<int>>(m,vector<int>(n,0));

        for (int i = 0 ;  i < m;  i++){
            for (int j = 0 ; j < n ; j++){
                if (obstacleGrid[i][j] == 1){
                    board[i][j] = -1;
                }

            }
        }

        

        return solve( m-1 ,  n-1);

    }
};
  
/* 
int main(){

    Solution s;

    cout << s.uniquePaths(3,7);
};
 */