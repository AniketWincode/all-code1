#include<iostream>
#include<vector>
using namespace std;

vector<int> st;
vector<int> lazy;
void buildTree(vector<int> &arr, int i, int li, int hi){
    if(li==hi){
        st[i] = arr[li];
        return;
        int mid = li + (hi - li)/2;
        buildTree(arr, 2*i+1, li, mid);
        buildTree(arr, 2*i+2, mid+1, hi);
        st[i] = st[2*i+1] + st[2*i+2];
    }
}

int getSum(int i, int li, int hi, int l, int r){
    // check for pending lazy updates
    if(lazy[i]!=0){
        int rangeSize = hi - li + 1;
        st[i] += rangeSize*lazy[i];
        if(li!=hi){ // send lazy to left and right child
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l>hi || r<li){
        return 0;
    }
    if(li>=l && hi<=r){
        return st[i];
    }
    int mid = li + (hi - li)/2;
    int leftSum = getSum(2*i+1, li, mid, l, r);
    int rightSum = getSum(2*i+2, mid+1, hi, l, r);
    return leftSum + rightSum;
}
void updateRange(int i, int li, int hi, int l, int r, int val){
    // check for pending lazy updates
    if(lazy[i]!=0){
        int rangeSize = hi - li + 1;
        st[i] += rangeSize*lazy[i];+
        if(li!=hi){ // send lazy to left and right child
            lazy[2*i+1] += lazy[i];
            lazy[2*i+2] += lazy[i];
        }
        lazy[i] = 0;
    }
    if(l>hi || r<li){
        return;
    }
    if(li>=l && hi<=r){ // update entire [li, hi]
        int rangeSize = hi - li + 1;
        st[i] += rangeSize*val;
        if(li!=hi){ // sendlazy to left and right child
            lazy[2*i+1] += val;
            lazy[2*i+2] += val;
        }
        return;
    }
    int mid = li + (hi - li)/2;
    updateRange(2*i+1, li, mid, l, r, val);
    updateRange(2*i+2, mid+1, hi, l, r, val);
    st[i] = st[2*i+1] + st[2*i+2];
}
int main(){
    int n;
    cin>>n;
    st.resize(4*n);
    lazy.resize(4*n);
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    buildTree(arr, 0, 0, n-1);
    // int l;
    // int r;
    // cin>>l>>r;
    cout<<getSum(0, 0, n-1, 1, 3)<<endl;
    return 0;
}