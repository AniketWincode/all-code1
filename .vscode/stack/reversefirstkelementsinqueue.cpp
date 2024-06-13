#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    stack<int> st;
    int k = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    
    int n  = q.size();
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }

    // for(int i=0;i<k;i++){
    //     q.push(st.top());
    //     st.pop();
    // }

    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}