#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v(200, 0);
    for(int i=1;i<=100;i++){
        for(int j=i;j<=100;j=j+i){
            if(v[i]==0){
                v[i] = 1;
            }
            else{
                v[i] = 0;
            }
        }
    }
    int x = 0;
    for(int i=1;i<=100;i++){
        if(v[i]==1){
            x++;
        }
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<x;
    return 0;
}