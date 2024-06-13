#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> x(n+10, 0);\
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++){
        int L, R;
        cin>>L>>R;
        x[L]++;
        x[R+1]--;
    }

    for(int i=1;i<x.size();i++){
        x[i] = x[i] + x[i-1];
    }

    vector<int> ans(10000005, 0);

    for(int i=0;i<=n;i++){
        int coins = x[i];
        ans[coins]++;
    }

    for(int i=ans.size()-2;i>=0;i--){
        ans[i] = ans[i] + ans[i+1];
    }

    int q;
    cin>>q;

    while(q--){
        int num;
        cin>>num;
        cout<<ans[num]<<"\n";
    }

    return 0;
}