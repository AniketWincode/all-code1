#include<iostream>
using namespace std;
int main(){
    bool flag = false;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;
    int li = 0;
    int hi = n-1;
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(arr[li]==target){
            cout<<"preset"<<endl;
            flag = true;
            break;
        }
        else if(arr[hi]==target){
            cout<<"present"<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]==target){
            cout<<"present"<<endl;
            flag = true;
            break;
        }
        else if(arr[mid]>target){
            hi = mid - 1;
        }
        else{
            li = mid + 1;
        }
    }
    if(flag!=true){
        cout<<"not present"<<endl;
    }
    
    return 0;
}