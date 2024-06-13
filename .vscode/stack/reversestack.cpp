#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottom(st, val);
    st.push(x);
}
void reverse(stack<int> &st){
    if(st.size()==1){
        return;
    }
    int x = st.top();
    st.pop();
    reverse(st);
    pushatbottom(st, x);
    // st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    reverse(st);
    while(st.size()!=0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}