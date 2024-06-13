/*#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 3, 4};
    int n = 5;
    int ans = arr[0];
    for(int i=1;i<n;i++){
        if(ans == arr[i]){
            cout<<arr[i]<<endl;
            break;
        }
        else{
            ans = arr[i];
        }
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int li = 0;
    int hi = n - 1;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(arr[mid]==mid+1){
            li = mid + 1;
        }
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid]<<endl;
                break;
            }
           else{
            hi = mid - 1;
           } 
        }
    }
    return 0;
}