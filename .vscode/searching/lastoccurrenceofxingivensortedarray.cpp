#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;
    reverse(arr.begin(), arr.end());
    int ans = -1;
    int li = 0;
    int hi = n-1;
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[mid]==x){
            ans = mid;
            // li = mid + 1;
        }
        if(arr[mid]>=x){
            // ans = mid;
            hi = mid - 1;
        }
        else if(arr[mid]<=x){
            // ans = mid;
            li = mid + 1;
        }
    }
    
    cout<<(n-ans-1)<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}

// try to improve time complexity