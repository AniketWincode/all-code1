#include<iostream>
using namespace std;
int main(){
    int arr[] = {4, 2, 4, 1, 3, 2, 5, 1, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout<<res<<endl;
    return 0;
}