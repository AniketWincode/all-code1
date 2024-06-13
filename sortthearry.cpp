// sort array 0's and 1's
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// time complexity is O(nsquare)
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i]<arr[j]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }
// two pass method
// int count_zeroes = 0;
// int count_ones = 0;
// for(int i=0;i<n;i++){
//     if(arr[i] == 0){  // not '0'
//         count_zeroes++;
//     }
//     else{
//         count_ones++;
//     }
// }

// cout<<count_ones<<" "<<count_zeroes<<endl;

// for(int i=0;i<n;i++){
//     if(i<count_zeroes){
//         arr[i]=0;
//     }
//     else{
//         arr[i]=1;
//     }
// }

// two pointer approcah
//     int i=0;
//     int j=n-1;

//     while(i<j){
//         if(arr[i]==0){
//             i++;
//         }
//         if(arr[j]==1){
//             j--;
//         }
//         if(i>j){  // important condition
//             break;
//         }
//             if(arr[i]==1 && arr[j]==0){  // return first and remove
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }

//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // two pass method
    int zeroes_count = 0;
    int ones_count = 0;
    int twos_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroes_count++;
        }
        else if (arr[i] == 1)
        {
            ones_count++;
        }
        else
        {
            twos_count++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i < zeroes_count){
            arr[i] = 0;
            zeroes_count--;
        }
        else{
            
        }
    }
    return 0;
}