#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int x(vector<int> &v, int n, int i, int k){
    if(i==n-1){
        return 0;
    }
    int result = INT_MAX;
    for(int idx=1;idx<=k;idx++){
        if(idx+i>=n){
            continue;
        }
        result = min(result, abs(v[i]-v[i+idx]) + x(v, n, idx+i, k));
    }
    return result;
}
int main(){
    int n = 3;
    int k = 1;
    vector<int> v = {10, 20, 10};
    cout<<x(v, n, 0, k);
    return 0;
}