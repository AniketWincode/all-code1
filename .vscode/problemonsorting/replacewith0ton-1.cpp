#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19, 12, 23, 8, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n, 0); // 0  means not visited4
    int x = 0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1){
                continue;
            }
            else{
                if(min>arr[j]){
                    min = arr[j];
                    minidx = j;
                }
            }
        }
        arr[minidx] = x;
        v[minidx] = 1; // visited
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}