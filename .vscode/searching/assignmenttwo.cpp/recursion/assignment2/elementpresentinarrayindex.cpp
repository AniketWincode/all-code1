#include<iostream>
using namespace std;
int index(int arr[], int n, int idx, int target){  // time complexity is O(n) and space complexity is O(N)
    if(idx==n){
        return -1;
    }
    if(arr[idx] == target){
        return idx;
    }
    return index(arr, n, idx+1, target);
}
int main(){

    int n;
    cin>>n;z
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<index(arr, n, 0, target);
    return 0;
}