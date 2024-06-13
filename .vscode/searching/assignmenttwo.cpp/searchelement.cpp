#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int li = 0;
    int hi = n - 1;
    int target;
    cin>>target;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]>target){
            hi = mid - 1;
        }
        else{
            li = mid + 1;
        }
    }
    return 0;
}