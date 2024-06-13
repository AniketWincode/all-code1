#include<iostream>
using namespace std;
void sum(int arr[], int n, int &sum1, int idx){
    if(idx==n){
        // cout<<sum1<<endl;
        return;
    }
    sum1 = sum1 + arr[idx];
    sum(arr, n, sum1, idx+1);
}

int sumofarray(int arr[], int n, int idx){
    if(idx == n - 1){
        return arr[idx];
    }

    return arr[idx] + sumofarray(arr, n, idx+1);
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int sum1 = 0;
    // sum(arr, n, sum1, 0);
    // cout<<sum1<<endl;
    cout<<sumofarray(arr, n, 0);
    return 0;
}