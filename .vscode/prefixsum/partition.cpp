// check if array can be partitioned into 2 continuous array of equal sum.
#include<iostream>
using namespace std;
int main(){
    bool flag = false;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefix array
    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }

    // check if amny x exists
    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            flag = true;
            idx = i;
            break;
        }
    }

    if(flag==true){
        cout<<"Yes it can be partitioned after"<<idx<<endl;
    }
    else{
        cout<<"it's cannot be patition"<<endl;    
    }
    return 0;
}