#include<iostream>
#include<stack>
using namespace std;
int main(){

    // Using a Stack : pop, ans, push
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nge[n];
    stack<int> st;
    st.push(arr[n-1]);
    nge[0] = -1;
/*
    time complexity : O(n)
    space complexity : O(n)
*/
    for(int i=1;i<n;i++){
        // pop all the element smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // marks the answer in next greater element array
        if(st.size()==0){
            nge[i] = -1;
        }
        else{
            nge[i] = st.top();
        }
        // push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    return 0;
}