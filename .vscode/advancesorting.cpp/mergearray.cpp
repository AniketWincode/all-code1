#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 3;
    int arr[n] = {1, 3, 5};
    int m = 6;
    int arr1[m] = {2, 4, 6, 7, 8, 90};
    vector<int> v(10, 0);
    
    int i=0;
    int j=0;
    int k=0;

    while(i!=n && j!=m){
        if(arr[i]>arr[j]){
            v.push_back(arr1[j]);
            j++;
            k++;
        }
        if(arr[i]<arr[j]){
            v.push_back(arr[i]);
            i++;
            k++;
        }
        if(i==n){
            v.push_back(arr1[j]);
            j++;
            k++;
        }
        if(j==m){
            v.push_back(arr[i]);
            i++;
            k++;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}