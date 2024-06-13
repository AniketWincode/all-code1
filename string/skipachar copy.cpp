#include<iostream>
using namespace std;

void removechar(string str, string str1, int i){
    if(i==str.size()){
        cout<<str1<<endl;
        return;
    }
    if(str[i]!='a'){
        str1 += str[i];
    }
    return removechar(str, str1, i+1);
}
int main(){

    string str = "raghav garg";

    removechar(str, "", 0);
    return 0;
}