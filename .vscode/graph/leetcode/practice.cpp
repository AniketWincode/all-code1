#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}