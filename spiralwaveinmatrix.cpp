#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    // wave print
    /*for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{  // when i%2!=0
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }cout<<endl;
    }*/

    // column wise print
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}