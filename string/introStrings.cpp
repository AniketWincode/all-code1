#include<iostream>
using namespace std;
int main(){
    // chracter always stored in single quotes char ch = '@';
    // char array always end with special character that character is NULL chracter
    // char str[5] = {'a', 'b', 'c', 'd', 'e'};
    // char str[5] ="abcd"; char str[5] = "abcd and '\n'" it is for termination the string
    // char ch = '\'; it is special character and char ch = '\t' tab four spaces\
    // char ch = '\0'; speacial character
    // for(int i=0;i<5 ;i++){
        // cout<<str[i]<<" ";
    // }
        // for(int i=0;str[i]!='\0';i++){
        // cout<<str[i]<<" ";
    // }
    // cout<<int(str[5])<<endl; no error
    // cout<<str[5]<<endl; error
    // cout<<"My name is A"<<endl; // strings always in double quotes
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}