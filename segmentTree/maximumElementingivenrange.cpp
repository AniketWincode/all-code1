#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> st; // segment tree
void buildTree(vector<int> arr, int i, int li, int hi){
    if(li==hi){ // base case
        st[i] = arr[li];
        return;
    }
    int mid = li + (hi - li)/2;
    buildTree(arr, 2*i+1, li, mid); // left subtree
    buildTree(arr, 2*i+2, mid+1, hi); // right subtree
    // build the tree then store maximum of left subtree and right subtree
    st[i] = max(st[2*i+1], st[2*i+2]);
}
int getMax(int i, int li, int hi, int &l, int &r){
    int mid = li + (hi - li)/2;
       if(r<li || l>hi){ // outside the range
            return INT_MIN;
       }
       if(li>=l && hi<=r){ // complete in the segment tree range
            return st[i];
       }
       else{
            int leftMax = getMax(2*i+1, li, mid, l, r);
            int rightMax = getMax(2*i+2, mid+1, hi, l, r);
            return max(leftMax, rightMax);
       }
}
int main(){
    vector<int> arr = {1, 4, 2, 8, 6, 4, 9, 3};
    int n = arr.size();
    st.resize(4*n);
    buildTree(arr, 0, 0, n-1);
    while(true){
        cout<<endl<<"Enter the range : ";
        int l;
        int r;
        cin>>l>>r;
        cout<<getMax(0, 0, n-1, l, r);
    }
    return 0;
}