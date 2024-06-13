#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){ // custom comparitor
    return a > b; // true picked a (first argument)
    // return a < b;  // false picked b (second argument)
    // a==b // picked any one fron a, b
}
int main(){
    vector<int> v = {5, 4, 1, -1, 9, 8, 16, 21, 12};
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
// a, b-> a<b -> we picked a