#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;

    int target = 18;

    int a[] = {1, 2, 4, 7, 10, 12, 15, 18};
    int li = 0;
    int hi = 1;
    while(a[hi] < target){
        li = hi;
        hi *= 2;
    }
    
    cout<<li<<" "<<hi<<" "<<endl;
    bool flag = false;
    while(li<=hi){
        int mid = li + (hi - li)/2;
        if(a[mid] == target){
            cout<<"present"<<endl;
            flag = true;
            break;
        }
        else if(a[mid] > target){
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