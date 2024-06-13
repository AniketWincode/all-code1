#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x(n+1, 0);
    int m;
    cin>>m;
    vector<int> l(n+1, 0);
    vector<int> r(n+1, 0);
    for(int i=0;i<m;i++){
        int L, R;
        cin>>L>>R;
        l[L]++;
        r[R]++;
    }
    x[1] = l[1];
    for(int i=1;i<=n;i++){
        x[i] = l[i] - r[i-1] + x[i-1];
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