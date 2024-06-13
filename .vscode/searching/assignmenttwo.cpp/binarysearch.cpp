#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int li = 0;
    int hi = n - 1;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid] > target){
            li = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return 0;
}