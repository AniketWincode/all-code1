/*#include<iostream>
using namespace std;
int main(){

    int arr[13] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = 13;
    int x = 3;
    int li = 0;
    int hi = n-1;

    int ans = -1;
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[mid]==x){
            ans = mid;
        }
        if(arr[mid]>=x){
            hi = mid - 1;
        }
        else if(arr[mid]<=x){
            li = mid + 1;
        }
    }

    cout<<ans<<endl;
    return 0;
}*/

// sir solved
#include<iostream>
using namespace std;
int main(){

    int arr[13] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 9};
    int n = 13;
    int  x = 2;
    int li = 0;
    int hi = n - 1;
    bool flag = false;
    while(li<=hi){
        int mid = li + (hi-li)/2;

        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid<<endl;
                break;
            }
            else{  // arr[mid-1] == x
            hi = mid - 1;
            }
        }
        else if(arr[mid]<x){
            li = mid+1;
        }
        else{
            hi = mid - 1;
        }
    }

    if(flag == false){
        cout<<-1<<endl;
    }
    return 0;
}