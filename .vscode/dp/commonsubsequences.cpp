#include<iostream>
#include<vector>
using namespace std;
    string ans = "";
    vector<vector<int>> dp;
    int x(string &s1, string &s2, int i, int j, string output){ // VIMP
        if(output.size()>ans.size()){
            ans = output;
        }
        if(i>=s1.size() || j>=s2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i]==s2[j]){
            return dp[i][j] = 1 + x(s1, s2, i+1, j+1, output + s1[i]);
        }
        else{
            return dp[i][j] = max(x(s1, s2, i+1, j, output), x(s1, s2, i, j+1, output));
        }
    }
int main(){
    dp.clear();
    dp.resize(1005, vector<int> (1005, -1));
    string s1, s2;
    cin>>s1>>s2;
    string output;
    x(s1, s2, 0, 0, output);
    cout<<ans;
    return 0;
}