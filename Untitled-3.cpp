// find the next permutation of array.
// if not possible then print the sorted order in ascending order.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // try
    /*int i=n-1;
    int j=n-2;

    bool count = false;
    while(count!=true){
    if(arr[i]<arr[j]){
        i--;
        j--;
    }
    else if(arr[i]>arr[j]){
        swap(arr[i], arr[j]);
        count=true;
    }        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    */
   
   int idx=-1;
   for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        idx=i;
        break;
    }
   }

   sort(idx+1,n-1);
   swap(arr[idx], arr[idx+1]);

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}