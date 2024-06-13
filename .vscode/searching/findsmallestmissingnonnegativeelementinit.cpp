// linear search
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i<<endl;
//             break;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[8] = {0, 1, 2, 4, 5, 6, 9, 17};
    int n = 8;
    int li = 0;
    int hi = n - 1;
    int ans = -1;
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[mid]==mid){
            li = mid + 1;
            // ans = mid;
        }
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}