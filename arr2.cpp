#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    // int* ptr = arr; //giving address
    int* ptr = &arr[0];
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<ptr[i]<<" "<<i[ptr]<<" "<<i[arr]<<endl;
    }
    return 0;
}