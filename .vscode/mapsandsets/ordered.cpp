#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    // set<int> s; // ordered set
    // s.insert(5);
    // s.insert(3);
    // s.insert(9);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    map<int, int> m;
    m[1] = 30;
    m[2] = 20;
    m[3] = 10;
    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<" "<<endl;
    }
    return 0;
}