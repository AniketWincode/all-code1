#include<iostream>
#include<stack>
using namespace std;
int main(){
    // using a stack : pop, ans, push & reverse traverse 
    // time complexity is O(n+n)
    // space complexity is O(n)
    int n = 8;
    int arr[n];
    // int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nge[n];
    nge[n-1] = -1;
    stack<int> st;
    st.push(arr[n-1]);
    for(int  i=n-2;i>=0;i--){
        // pop all the elements smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array
        if(st.size()==0){
            nge[i] = -1;
        }
        else{
            nge[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;
}