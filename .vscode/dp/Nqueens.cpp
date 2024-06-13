#include<iostream>
#include<vector>
using namespace std;

vector<vector<char> > grid;
vector<vector<char> > result;

bool canPlace(int row, int col, int n){
    // column
    for(int i=row-1;i>=0;i--){
        if(grid[i][col] == 'Q'){ // we are attacked
            return false;
        }
    }
        // left diagonal check
        for(int i=row-1, j=col-1; i>=0 and j>=0; i--, j--){
            if(grid[i][j] == 'Q'){ // we are attached
                return false;
            }
        }
        // right diagonal cheak
        for(int i=row-1, j=col+1; i>=0 and j<n; i--, j++){
            if(grid[i][j]=='Q'){ // we are attached
                return false;
            }
        }
    return true; // no attached
}

void x(int row, int n){
    if(row==n){
        // we got one possible answer
        vector<string> temp;
        for(int i=0;i<n;i++){
            string res = "";
            for(int j=0;j<n;j++){
                // cout<<grid[i][j]<<" ";
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }
    
    for(int col = 0; col < n; col++){
        if(canPlace(row, col, n)){
            grid[row][col] =  'Q';
            x(row+1, n);
            grid[row][col] = '.';
        }
    }
}

vector<vector<string> > nqueen(int n){
    grid.clear();
    result.clear();
    grid.resize(n, vector<char> (n, '.'));
    x(0, n);
}

int main(){

    nqueen(4);
    
    return 0;
}