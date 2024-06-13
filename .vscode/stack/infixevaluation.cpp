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
    string s = "7+9*4/8-3"; // infix expressions
    // we need two stack, 1 for vals, 1 for ops
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        // check if s[i] is digit (0-9)
        int ascii = (int)(s[i]);
        if(ascii>=48 && s[i]<=57){
            // val.push(stoi(s[i]));
            // val.push(s[i]-'0');
            val.push(s[i]-48);
        }
        else{
            // s[i] it is -> *, /, +, -
            if(op.size()==0){
                op.push(s[i]);
            }
            else if(priority(s[i])>priority(op.top())){
                op.push(s[i]);
            }
            else{
                // work , priority(s[i])<=priority(op.top())
                //  i have to do val1 op val2
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the opertor stcak can have values.
    // so make it empty
    while(op.size()>0){
        // work
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout<<val.top();
    return 0;
}