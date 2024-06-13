#include<iostream>
#include<vector>
using namespace std;
long long dp[2005][2005][8];
long long helper(vector<int> &v1, vector<int> &v2, int i, int j, int k){
    if(i>=v1.size() || j>=v2.size()
        return 0;
    }
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    long long res = 0;
    if(v1[i]==v2[j]){
        res = 1 + helper(v1, v2, i+1, j+1, k);
    }
    else if(v1[i]!=v2[j]){
        if(k>0){
            res = 1 + helper(v1, v2, i+1, j+1, k-1);
        }
        res = max(res, helper(v1, v2, i, j+1, k));
        res = max(res, helper(v1, v2, i+1, j, k));
    }
    dp[i][j][k] = res;
    return res;
}
int main(){
    int n;
    int m;
    int k;
    cin>>n>>m>>k;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    long long x = helper(v1, v2, 0, 0, k);
    cout<<x;
    return 0;
}