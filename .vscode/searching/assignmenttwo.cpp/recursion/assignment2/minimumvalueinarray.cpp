/*#include<iostream>
using namespace std;
int minimum(int arr[], int n, int idx){  // time complexity is O(n) and space complexity is O(n)
    if(idx==n){
        return INT16_MAX;
    }

    return min(arr[idx], minimum(arr, n, idx+1));
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = 0;
    cout<<minimum(arr, n, idx);
    return 0;
}*/
