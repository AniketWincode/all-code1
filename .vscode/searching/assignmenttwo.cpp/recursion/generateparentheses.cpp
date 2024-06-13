#include<iostream>
using namespace std;
void generateparentheses(string str, int n, int i, int j){  // i=opening brackets and j=closing brackets
    if(str.size()==n*2){
        cout<<str<<endl;
        return;
    }

    if(i==j){
        generateparentheses(str+"(", n, i+1, j);  // don't right i=i+1 and j=j+1
    }
    if(i<n && i>j){
        generateparentheses(str+"(", n, i+1, j);
        generateparentheses(str+")", n, i, j+1);
    }
    if(i>=n){
        generateparentheses(str+")", n, i, j+1);
    }
}
int main(){

    int n = 3;
    
    generateparentheses("", n, 0, 0);
    return 0;
}