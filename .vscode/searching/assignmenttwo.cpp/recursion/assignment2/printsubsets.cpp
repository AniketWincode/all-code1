#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset1(string str, string ans, int n, int idx, vector<string> &v){

    if(idx == str.size()){
        v.push_back(ans);
        // cout<<ans<<endl;
        return;
    }
    char ch = str[idx];
    // cout<<str[idx]<<" ";
    subset1(str, ans, n, idx+1, v);
    subset1(str, ans+ch, n, idx+1, v);
}

void printsubset(string str, string ans){
    if(str == ""){
        cout<<ans<<" ";
        return;
    }
    char ch = str[0];
    printsubset(str.substr(1), ans+ch);
    printsubset(str.substr(1), ans);
}
 int main(){

    string str = "aba";
    int idx = 0;
    int n = str.size();
    vector<string> v;
    string ans = "";
    // subset1(str, ans, n, idx, v);

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    printsubset(str, "");
    return 0;
}
