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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    pushatbottom(st, -10);
    while(st.size()!=0){
        cout<<st.top()<<" ";
        st.pop();
}
    return 0;
}