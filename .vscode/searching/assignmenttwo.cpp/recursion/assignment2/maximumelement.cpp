#include<iostream>
using namespace std;

int maxi(int arr[], int n, int idx){
    if(idx == n){
        return INT16_MIN;
    }

    return max(arr[idx], maxi(arr, n, idx+1));
}
int main(){

    int arr[]  = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<maxi(arr, n, 0);
    return 0;
}