/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
        }
    }
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
void sequence(int arr[], int n, vector<int> ans, int idx, int k){

    if(idx == n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }cout<<endl;
        }
        // v.push_back(ans);
        return;
    }

    if(ans.size()+(n-idx)<k) return;
    sequence(arr, n, ans, idx+1, k);
    ans.push_back(arr[idx]);
    sequence(arr, n, ans, idx+1, k);

}
int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    vector<int> ans;
    sequence(arr, n, ans, 0, 3);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i][i]<<endl;
    // }
    return 0;
}