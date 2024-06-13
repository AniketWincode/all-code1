// sort the array 0's, 1's and 2's
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // two pass solution means twotimes for loop is used in question
    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
            
        }
        else if(arr[i]==1){
            one++;
            
        }
        else{
            two++;
            
        }
    }


    for(int i=0;i<n;i++){
        if((zero)!=0){//cout<<"00"<<" ";
            arr[i]=0;
            zero--;
        }
        else if((one)!=0){//cout<<"11"<<" ";
            arr[i]=1;
            one--;
        }
        else{//cout<<"22"<<" ";
            arr[i]=2;
            two--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

// 3 pointer algorithms (dutch flag algo)
// also called one pass solution
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int li = 0;
    int mid = 0;
    int hi = n-1;
    // li<=hi
    // 1) mid ke baare mai socho in array
    // 2) 0 to li-1 = 0, hi-1 to end = 2, li to mid-1 = 1
    while(mid<=hi){
        if(arr[mid]==2){
            swap(arr[mid],arr[hi]);
            hi--;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[li]);
            li++; 
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}