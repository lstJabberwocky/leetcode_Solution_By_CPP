#include <vector>
#include <iostream>
using namespace std;


class Solution {

vector<vector<bool>> notTarget;
vector<pair<int,int>> upRightDownLeft = {{-1,0},{0,1},{1,0},{0,-1}};
int col;
int row;

private:
    void dfs( vector<vector<char>>& board,int y,int x){

        if(board[y][x] == 'X'){
            return;
        }

        notTarget[y][x] = true;

        for( auto i : upRightDownLeft){
            int nextY = y + i.first;
            int nextX = x + i.second;
            if (nextY < 0 || nextX < 0 || nextX >= col || nextY >= row ){
                continue;
            
            }
            if (notTarget[nextY][nextX]){
                continue;
            }

             if(board[nextY][nextX] == 'X'){
            continue;
            }
            dfs(board,nextY,nextX);
            
        }
        
        
    }

public:
    void solve( vector<vector<char>>& board) {
        row = board.size();
        col = board[0].size();
        notTarget.resize(row,std::vector<bool>(col,false));


        for (int y = 0; y < row; y++){
            for (int x = 0; x < col; x++){
                if (y == 0 || y == row - 1 || x == 0 || x == col - 1){
                    
                    dfs(board,y,x);
                }
            }
        }

        for (int y = 0; y < row; y++){
            for (int x = 0; x < col; x++){
                if (notTarget[y][x] == false){
                    board[y][x] = 'X';
                }
            }
        }
    }
};

int main(){
    Solution s;
    vector<vector<char>> board = {
        {'X','X','X','O'},
        {'X','O','O','X'},
        {'X','O','O','X'},
        {'X','X','X','X'}};
    vector<vector<char>> boardSpecial = {
        {'O'}};

    s.solve(board);

    for (int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[0].size(); j++){
            cout << board[i][j] ;
        }
        cout << "\n";
    }
}