#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    // set store the unique element
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(10);
    s.erase(10);
    // cout<<s.size()<<endl;
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    int target = 4;
    // s.find -> it searches in the set, and if it found then it returns the last element 
    if(s.find(target)!=s.end()){ // target exists
        cout<<"exist"<<endl;
    }
    else{
        cout<<"does not exist"<<endl;
    }
    return 0;
}