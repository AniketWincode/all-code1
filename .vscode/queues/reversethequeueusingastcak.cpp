#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    stack<int> st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }

    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}