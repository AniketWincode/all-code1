#include<iostream>
using namespace std;
int main(){
    int n = 98;
    int li = 1;
    int hi = n;
    bool flag = false;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(mid*mid==n){
            cout<<"perfect square root"<<endl;
            flag = true;
            break;
        }
        else if((mid*mid)>n){
            hi = mid - 1;
        }
        else if((mid*mid)<n){
            li = mid + 1;
        }
    }

    if(flag==false){
        cout<<"no perfect sqaure root"<<endl;
    }
    return 0;
}