#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {

public:
    vector<vector<string>> result;
    vector<bool> col;
    vector<bool> diag1;
    vector<bool> diag2;


    void dfs(vector<string>&baord,int y){

        if (y == baord.size()){
            result.push_back(baord);
            return;
        }

        
        for (int c = 0; c < baord.size();c++){
            if (col[c] || diag2[y+c] || diag1[y-c+baord.size()-1]){
                continue;
            }

            baord[y][c] = 'Q';
            col[c] = true;
            diag1[y-c+baord.size()-1] = true;
            diag2[y+c] = true;

            dfs(baord,y+1);
            
            baord[y][c] = '.';
            col[c] = false;
            diag1[y-c+baord.size()-1] = false;
            diag2[y+c] = false;
        }

    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board = vector<string>(n,string(n,'.'));
        col = vector<bool>(n,false);
        diag1 = vector<bool>(2*n-1,false);
        diag2 = vector<bool>(2*n-1,false);
        dfs(board,0);
        return result;
    }
};

int main(){
    Solution s;
    
    s.solveNQueens(9);

    for ( auto i : s.result){
        for (auto j : i){
            cout << j << endl;
        }
        cout << endl;
    }

    
}
