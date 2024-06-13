#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    // unordered_map<string, int> m;
    // pair<string, int> p1;
    // p1.first = "A";
    // p1.second = 9;
    // pair<string, int> p2;
    // p2.first = "AA";
    // p2.second = 99;
    // pair<string, int> p3;
    // p3.first = "AAB";
    // p3.second = 991;
    // m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    // // m["yes"] = 9;
    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    unordered_map<int, int> m;
    vector<int> v = {1, 2, 2, 1, 1, 3};
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }

    for(auto x : m){
        if(x.second==1){
            cout<<x.first<<" ";
        }
    }
    return 0;
}