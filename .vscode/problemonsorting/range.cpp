#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {5, 3, 10, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){ // kmin
            kmin = max(kmin, float(arr[i]+arr[i+1])/2);
        }
        else{ // kmax
            kmax = min(kmax, float(arr[i]+arr[i+1])/2);
        }
        if(kmin>kmax){ // VIMP
            flag = false;
            break;
        }
    }
    
    if(flag==false){
        cout<<-1<<" ";
    }
    else if(kmin==INT_MIN){
        cout<<"array is already sorted is incresing order"<<endl;
    }
    else if(kmax==INT_MAX){
        cout<<"array is already sorted in decreasing order"<<endl;
    }
    else if(kmin==kmax){
        if((kmin-(int)kmin)==0){ // kmin and kmax are integers
            cout<<"there is only one value of k is : "<<kmin<<endl;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if((kmin-(int)kmin)>0){
            kmin = (int)kmin+1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]"<<endl;
    }
    return 0;
}