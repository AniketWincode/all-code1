#include<iostream>
using namespace std;
int index(int arr[], int n, int target){
    if(arr[n]==target){
        return n;
    }
    if(n==0){
        return -1; 
    }
    return index(arr, n-1, target);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<index(arr, n-1, 9);
    return 0;
}