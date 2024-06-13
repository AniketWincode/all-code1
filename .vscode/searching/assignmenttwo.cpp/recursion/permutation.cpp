#include<iostream>
using namespace std;
void permutation(string str, string ans){
    if(ans.size()==3){
        cout<<ans<<" ";
        return;
    }
    for(int i=0;i<str.size();i++){
    string left = str.substr(0,i);
    string right = str.substr(i+1);
    permutation(left+right, ans+str[i]);
    // str = left + right;        
    }
}
int main(){
    string str = "abc";
    permutation(str, "");
    return 0;
}