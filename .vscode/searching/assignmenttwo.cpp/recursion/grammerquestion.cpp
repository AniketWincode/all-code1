#include<iostream>
#include<vector>
using namespace std;

int power(int n){
    int ans = 1;
    if(n==1){
        return 1;
    }
    for(int i=1;i<=n;i++){
        ans *= 2;
    }
    return ans;
}
int main(){
    int n = 9;
    vector<string> v;
    v[0] = "0";
    // cout<<str;
    // for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            string str = "";
        for(int j=0;j<9;j++){
            if(v[j]=="0"){
                str+="01";
            }
            else{
                str+="10";
            }
        // }
        // cout<<endl;
    }     
    v.push_back(str);       
        }

    // cout<<power(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}