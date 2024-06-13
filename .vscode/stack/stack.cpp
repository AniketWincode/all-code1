#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl;
    st.push(10);
    // cout<<st.size()<<endl;
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // printing the stack element
    /*while(st.size()){
        cout<<st.top()<<" ";
        st.pop();
    }*/

    // we will use extra stack
    stack<int> temp;
    while(st.size()!=0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    // putting elemets back from temp to stack temp;
    while(temp.size()!=0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top()<<" ";
    return 0;
}