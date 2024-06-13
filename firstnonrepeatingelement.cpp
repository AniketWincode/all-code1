#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    for(int i=0;i<n;i++){
        count = 0;
        for(int j=0;j<n;j++){  // j is starting the with 0
            if(i!=j && arr[i]==arr[j]){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}