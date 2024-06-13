// Given a sentences 'str, return the word that is occuring most number of times in that sentence.
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str = "raghav is a maths teacher, He is a dsa mentor as well!";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int maxcount = 1;
    int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxcount = max(maxcount, count);
    }
    // cout<<maxcount<<endl;

    count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }
    return 0;
}