// merge two sorted arrays
/*#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int arr1[n];
    int arr2[m];
    int arr3[m+n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int j=0;
    int k=0;
    int x=0;
    while(j==k){
        if(arr1[j]>arr2[k]){
            arr3[x]=arr2[k];
            x++;
            k++;
        }
        else{
            arr3[x]=arr1[j];
            j++;
            x++;
        }
    }

    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}*/