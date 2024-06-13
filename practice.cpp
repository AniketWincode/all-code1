#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    auto it1 = lower_bound(v.begin(), v.end(), 8);
    auto it2 = upper_bound(v.begin(), v.end(), 8);
    cout<<*it1;
    return 0;
}