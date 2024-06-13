#include<iostream>
using namespace std;

int partition(int arr[],int first,int last){
    int pivot = arr[last];
    int i=first-1;//for inserting element < pivot
    int j = first;//for finding element < pivot
    for(;j<last;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]); // shuffle the element which are less than the pivot element
        }
        
    }
    //now i is pointing to the last element < pivot
    //correct postion for pivot will be --> i+1
    swap(arr[i+1],arr[last]);
    return i+1; // why return because int pivotinteger
}

int quicksort(int arr[],int first,int last, int k){

    //base case
    // if(first>=last){
    //     return -1;
    // }
    int pivotinteger = partition(arr,first,last);
    if(pivotinteger+1==k){
        return arr[pivotinteger];
    }
    else if(pivotinteger+1>k){
        return quicksort(arr,first,pivotinteger-1, k);
    }
    else{
        return quicksort(arr,pivotinteger+1,last, k);
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = 9;
    cout<<quicksort(arr,0,n-1, k);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}