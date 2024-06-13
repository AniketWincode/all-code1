#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                v[i][j] = 1 + v[i][j] + max(v[i-1][j+1], v[i-1][j+2]);
            }
            else if(j==1){
                v[i][j] = v[i][j] + max(v[i-1][j-1], v[i-1][j+1]);
            }
            else if(j==2){
                v[i][j] = v[i][j] + max(v[i-1][j-1], v[i-1][j-2]);
            }
        }
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = max(ans, v[n-1][i]);
    }

    cout<<ans<<"\n";
    return 0;
}