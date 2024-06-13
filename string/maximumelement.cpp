#include<iostream>
using namespace std;
int maxi(int arr[], int n, int i){
    if(i == n){
        return 1;
    }
    return max(arr[i], maxi(arr, n, i+1));
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxi(arr, n, 0);
    return 0;
}