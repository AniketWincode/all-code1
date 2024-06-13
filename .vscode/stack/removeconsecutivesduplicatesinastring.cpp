#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
void remove(string &s, stack<char> &st){
    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]){
            // cout<<st.top();
            st.push(s[i]);
        }
    }
}
int main(){
    string s = "aaabbcddaabffg";
    reverse(s.begin(), s.end());
    stack<char> st;
    st.push(s[0]);
    remove(s, st);
    // cout<<endl;
    while(st.size()!=0){
        cout<<st.top();
        st.pop();
    }
    return 0;
}