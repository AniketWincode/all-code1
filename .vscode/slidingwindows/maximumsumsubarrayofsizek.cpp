#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 1, 2, 9, 8, 4, 9, 3, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j = 0;
    int sum = 0;
    int ans = -1;
    int k = 8;
    for(int i=0;i<=n-k;i++){
        j = i;
        sum = 0;
        int x = 0;
        while(x<k){
            sum += arr[j++];
            x++;
        }
        // cout<<sum<<" ";
        ans = max(ans, sum);
    }
    cout<<endl;
    cout<<ans<<" ";
    return 0;
}