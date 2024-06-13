#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<vector<int>> dp;
string s = ""; // runtime error/copy created /memory exided
int x(string &str, int idx, string &str1, int idx1, string s1){
    if(s1.size() > s.size()){
        s = s1;
    }
    if(idx>=str.size() || idx1>=str1.size()){
        return 0;
    }
    if(dp[idx][idx1]!=-1){
        return dp[idx][idx1];
    }
    if(str[idx]==str1[idx1]){
        return dp[idx][idx1] =  1 + x(str, idx+1, str1, idx1+1, s1+str[idx]);
    }
    else{
        return max(x(str, idx+1, str1, idx1, s1), max(x(str, idx, str1, idx1+1, s1), x(str, idx+1, str1, idx1+1, s1)));
    }
}
int main(){
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    dp.clear();
    dp.resize(3005, vector<int> (3005, -1));
    cout<<x(str, 0, str1, 0, "");
    cout<<s<<endl;
    return 0;
}