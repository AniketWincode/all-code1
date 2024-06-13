#include<iostream>
using namespace std;
int main(){
    int arr[6] = {0, 0, 0, 0, 1, 1};
    int n = 6;
    int li = 0;
    int hi = n-1;
    int ans = -1;
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[mid]==1){
            ans = mid;
        }
        if(arr[mid]!=1){
            li = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    
    cout<<n-ans<<endl;
}