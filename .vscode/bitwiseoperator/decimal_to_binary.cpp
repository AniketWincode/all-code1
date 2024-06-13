#include<iostream>
using namespace std;

string decimal_to_binary(int num){
    string result = "";
    while(num>0){
        if(num%2==0){
            //even 
            result = "0" + result; // prepend
        }
        else{
            result = "1" + result;
        }
        // num = num / 2;
        num = num >> 1;
    }
    return result;
}

int main(){
    cout<<decimal_to_binary(13)<<endl;
    return 0;
}