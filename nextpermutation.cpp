// find the next permutation of array.
// if not possible then print the sorted order in ascending order.
#include<iostream>
// #include<algorithm>
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
// mistake sortr with idx ya idx + 1
    // for(int i=idx+1;i<n;i++){
    // for(int j=idx+1;j<n;j++){
    //     if(arr[i]<arr[j]){
    //         swap(arr[i], arr[j]);
    //     }
    // }
   for(int i=idx;i<n;i++){
    for(int j=idx;j<n;j++){
        if(arr[i]<arr[j]){
            swap(arr[i], arr[j]);
        }
    }
   }
//    swap(arr[idx], arr[idx+1]);
   int temp = arr[idx];
   arr[idx] = arr[idx+1];
   arr[idx+1] = temp;

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}