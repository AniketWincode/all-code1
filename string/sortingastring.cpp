// sorting a string in lexographically
#include<iostream>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    string str;
    getline(cin,str);
    sort(str.begin(), str.end());  // sort using ascii value those charcter/number has small ascii value they give first in string
    cout<<str<<endl;
    char ch = ' '; // space also a ascii value
    cout<<int(ch)<<endl;
    return 0;
}