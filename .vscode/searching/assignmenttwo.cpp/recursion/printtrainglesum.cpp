#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v = {5, 4, 3, 2, 1};
    int n = 5;
    vector<vector<int> > ans;
    ans.push_back(v);
    for(int i=0;i<n;i++){
        vector<int> v(n-1-i);
        ans.push_back(v);
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            ans[i][j] = ans[i-1][j] + ans[i-1][j+1];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}