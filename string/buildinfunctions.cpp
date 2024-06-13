#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // not possible to type cast the string
    // int x = 99; 
    // cout<<string(x)<<endl;  // not possible
    string str = "abcd";
    str.push_back('a');
    // str.push_back("aaaa");  // not correct   `
    cout<<str<<endl;
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}