#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    int li = 0;
    int hi = n-1;
    int ans = -1;
    int mid = 0;
    while(li<=hi){
        mid = li + (hi-li)/2;
        if(v[hi]==1){
            ans = hi;
        }
        if(v[li]==v[hi]==1){
            cout<<hi - li + 1;
            break;
        }
        else if(v[mid]!=1){
            li = mid + 1;
        }
        else if(v[mid]==1){
            hi = mid - 1;
        }
    }

    cout<<ans-mid<<endl;
    return 0;
}