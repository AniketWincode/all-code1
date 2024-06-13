#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<vector<int>> ans(3, vector<int> (3, 0));
int x(vector<vector<int>> &mat, int i, int j){
    if(i<0 || j<0 || i>=mat.size() || j>=mat.size() || mat[i][j]==-1){
        return INT_MAX;
    }
    if(mat[i][j]==0){
        return 1;
    }
    mat[i][j] = -1;    
    return 1+min({x(mat, i+1, j), x(mat, i-1, j), x(mat, i, j+1), x(mat, i, j-1)});
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int> (n, -1));
    vector<vector<int>> z(n, vector<int> (n, -1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int y;
            cin>>y;
            mat[i][j] = y;
        }
    }
    ans = mat;
    z = mat;
    // cout<<x(mat, 2, 0)<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat = z;
            if(mat[i][j]==1){
                cout<<i<<" "<<j<<" "<<x(mat, i, j)-1<<endl;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}