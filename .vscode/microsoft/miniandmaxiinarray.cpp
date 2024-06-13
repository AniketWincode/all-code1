#include<iostream>
using namespace std;
int main(){
    int arr[] = {30, 5, 4, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = arr[0];
    int mini = arr[0];
// time complexity is O(n) and try to improve to O(n/2)
    for(int i=1;i<n;i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
        else if(mini>arr[i]){
            mini = arr[i];
        }
    }

    cout<<"maxi "<<maxi<<endl;
    cout<<"mini "<<mini<<endl;
    return 0;
}