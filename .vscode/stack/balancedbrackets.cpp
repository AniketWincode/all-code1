#include<iostream>
#include<stack>
using namespace std;
/*bool isBalance(string s){
    if(s.size()%2!=0){
        return false;
    }
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(st.size()==0 && s[i] == ')'){
            return false;
        }
        else if(st.size()==0 && s[i] == '('){
            st.push('(');
        }
        else if(st.top() == '(' && s[i] == ')'){
            st.pop();
        }
    }
    if(st.size()==0){
        return true;        
    }
    return false;
}*/

bool isBalance(string s){
    if(s.length()%2!=0){
        return false;
    }
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(st.size()==0){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.size()==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "()()()";
    cout<<isBalance(s);
    return 0;
}