// sort() // nlog(n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1;j++){
    //         if(arr[i]<arr[j]){
    //             swap(arr[i], arr[j]);
    //             count++;
    //         }
    //     }
    // }

    // bubble sort optimised
    for(int i=0;i<n-1;i++){
        // traverse
        bool flag = true;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){ // swap
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // cout<<count<<endl;
    return 0;
}