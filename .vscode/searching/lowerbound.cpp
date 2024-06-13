// using a linear search
/*#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    int x = 2;
    int result = 0;
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    // solve by me
    // for(int i=0;i<9;i++){
    //     if(arr[i]<x){
    //          result = max(result, arr[i]);
    //     }
    // }

    // solve by sir
    for(int i=0;i<9;i++){
        if(arr[i]>x){
            cout<<arr[i-1]<<endl; // lower bound
            cout<<arr[i]<<endl;  // upper bound
            break;
        }
    }

    // cout<<result<<endl;
    return 0;
}*/

// using a binary search
// #include<iostream>
// using namespace std;
// int main(){

//     int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    
//     int lower_bound = -1;
//     int li = 0;
//     int hi = 8;
//     int target = 8;
//     while(li<=hi){
//         int mid = li + (hi-li)/2;
//         if(arr[mid]==target){
//             lower_bound = arr[mid-1];
//             // cout<<mid<<endl;
//             break;
//         }
//         else if(arr[mid]>target){
//             lower_bound = arr[mid]; // 5
//             hi = mid - 1; // 5
//         }
//         else{
//             li = mid;
//             lower_bound = arr[mid];
//         }
//     }
//     cout<<lower_bound<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){

    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};

    int n = 9;
    int x = 12;
    int li = 0;
    int hi = n-1;
    bool flag = false;

    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];  // cout<<arr[mid+1]<<endl;
            break;
        }
        else if(arr[mid]<x){
            li = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(flag==false){
        cout<<arr[hi]<<endl;  // cout<<arr[li]<<endl;
    }
    return 0;
}