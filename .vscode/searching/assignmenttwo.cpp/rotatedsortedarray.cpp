#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int li = 0;
    int hi = n - 1;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        ans = mid;
        if(arr[mid]>arr[mid-1] && arr[mid]<arr[hi]){
            hi = mid - 1;
        }
        else{
            li = mid + 1;
        }
    }
    cout<<li<<" li "<<hi<<" hi "<<endl;
    cout<<ans<<" ";
    cout<<arr[ans]<<endl;
    // cout<<arr[ans-1];
    return 0;
}