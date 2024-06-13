#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
string decode(string &input){
    string res = "";
    if(input.size()==1){
        res += (char)(64 + input[0] - '0'); // to covert into capital letter
    }
    else{
        int num = (input[0] - '0')*10 + (input[1]-'0');
        res += (char)(64 + num);
    }
    return res;
}

vector<ll> dp;
ll x(string &str, int i){
    if(i<=0){
        return 1;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    ll ans = 0;
    if(str[i]-'0'>0){
        ans += x(str, i-1);
    }
    if(str[i-1]-'0'>0 && (str[i-1]-'0')*10 + (str[i]-'0') <=26){
        ans += x(str, i-2);
    }
    return dp[i] = ans;
}

ll bottomup(string &str){
    dp.resize(5005, -1);
    dp[0] = 1;
    if(str.size() > 1){
        if(str[1] != '0'){
            dp[1] += dp[0];
        }
        if((str[0]-'0')*10 + (str[1]-'0') <= 26){
            dp[1]++;
        }
    }
    for(int i=2;i<str.size();i++){
        ll ans = 0;
        if(str[i]-'0' > 0){
            ans += dp[i-1];
        }
        if(str[i-1]-'0'>0 && (str[i-1] - '0')*10 + (str[i] - '0') <=26){
            ans += dp[i-2];
        }
        dp[i] = ans;
    }
    return dp[str.size()-1];
}

int main(){
    string n;
    cin>>n;
    while(n[0]!='0'){ // break the output
    dp.clear();
    // dp.resize(5005, -1);
        // cout<<x(n, n.size()-1);
        cout<<bottomup(n)<<endl;
        cin>>n;
    }
    return 0;
}