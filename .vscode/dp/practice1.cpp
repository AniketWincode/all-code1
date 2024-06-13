// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// vector<int> v;
// vector<int> dp;
// int k;
// int x(int i){
//     if(i==v.size()-1){
//         return 0;
//     }
    
//     int result = INT_MAX;
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     for(int j=1;j<=k;j++){
//         if(i+j>=v.size()){
//             continue;
//         }
//         result = min(result, abs(v[i]-v[i+j])+x(i+j));
//     }
//     return dp[i] = result;
// }
// int main(){
//     int n;
//     cin>>n;
//     cin>>k;
//     dp.clear();
//     dp.resize(n, -1);
//     for(int i=0;i<n;i++){
//         int y=0;
//         cin>>y;
//         v.push_back(y);
//     }
//     cout<<x(0)<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<vector<int>> v;
vector<vector<int>> dp;
int n;
int x(int i, int y){
    if(i>=n){
        return 0;
    }
    if(dp[i][y]!=-1){
        return dp[i][y];
    }
    int result = INT_MIN;
    for(int j=0;j<3;j++){
        if(i==0){
            result = max(result, v[i][j]+x(i+1, j));
        }
        if(j!=y){
            result = max(result, v[i][j]+x(i+1, j));             
        }
    }
    return dp[i][y] = result;
}
int main(){
    // int n;
    cin>>n;
    // v.clear();
    v.resize(n, vector<int> (n));
    dp.clear();
    dp.resize(100005, vector<int> (3, -1));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int y = 0;
            cin>>y;
            v[i][j] = y;
        }
    }
    cout<<x(0, 0)<<endl;

    return 0;
}