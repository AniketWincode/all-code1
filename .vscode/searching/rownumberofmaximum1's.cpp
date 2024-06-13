#include<iostream>
// #include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n][n];
    // vector<vector<int> >(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    int li = 0;
    int hi = n- 1;

    for(int i=0;i<n;i++){
    while(li<=hi){
        int mid = li + (hi-li)/2;
        if(v[i][mid]==1){
            if(v[i][mid-1]==target){
                hi = mid - 1;
            }
            else{
                ans = mid;
                cout<<ans<<endl;
            }
        }
        else if(v[i][mid]!=1){
            li = mid + 1;
        }
        else if(v[i][mid]==1){
            hi = mid - 1;
        }
    }        
    }


    return 0;
}