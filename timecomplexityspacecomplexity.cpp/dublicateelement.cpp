// finding the dublicate
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    int x = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }
    
    int dublicateelement = sum - x;
    cout<<dublicateelement<<endl;
    
    return 0;
}