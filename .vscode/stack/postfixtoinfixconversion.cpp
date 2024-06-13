#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return 2; // *, /
    }
}
int solve(int val1, int val2, char ch){
    if(ch=='+'){
        return val1+val2;
    }
    else if(ch=='-'){
        return val1-val2;
    }
    else if(ch=='/'){
        return val1/val2;
    }
    else if(ch=='*'){
        return val1*val2;
    }
}
int main(){
    string s = "79+4*8/3-"; // infix expressions
    // we need one stack, 1 for vals
    stack<string> val;
    for(int i=0;i<s.length();i++){
        // check if s[i] is digit (0-9)
        int ascii = (int)(s[i]);
        if(ascii>=48 && s[i]<=57){
            // val.push(stoi(s[i]));
            // val.push(s[i]-'0');
            val.push((s[i]-48));
        }
        else{
            // kaam
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
            }
    cout<<val.top();
    return 0;
}