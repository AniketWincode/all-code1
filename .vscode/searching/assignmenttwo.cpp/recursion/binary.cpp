#include<iostream>
using namespace std;
void generatebinary(int n, string str){
    if(str.size()==n){
        cout<<str<<endl;
        return;
    }
    generatebinary(n, str+"0");
    if(str==""){
    generatebinary(n, str+"1");        
    }
    else if(str[str.length()-1]=='0'){
        generatebinary(n, str+'1');
    }

}
int main(){

    generatebinary(5, "");
    return 0;
}