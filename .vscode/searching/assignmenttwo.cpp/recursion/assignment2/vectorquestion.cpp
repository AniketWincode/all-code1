#include<iostream>
using namespace std;

void print(int a[], int n){
    if(n<1){
        return;
    }
    int temp[n-1];
    for(int i=0;i<n;i++){
        temp[i] = a[i] + a[i+1];
    }
    for(auto x:temp){
        cout<<x<<" ";
    }
    cout<<endl;
    print(temp, n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;

    print(a, n);
    return 0;
}