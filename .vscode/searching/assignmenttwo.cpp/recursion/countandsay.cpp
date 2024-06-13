#include<iostream>
using namespace std;

string countandsay(int n){
    if(n==1){
        return "1";
    }
    
    string str = countandsay(n-1);
    int freq = 1;
    string ztr = "";
    char ch = str[0];  // 3

    for(int i=1;i<=str.size();i++){  // 1 2 3 4 5 6
        char dh = str[i]; // 5
        if(ch==dh){
            freq++; // 1
        }
        else{
            ztr += (to_string(freq) + ch);  // 23321511
            ch = str[i]; // 2
            freq = 1;
            // ch = dh;
        }
    }

    // ztr += to_string(freq)+ch;
    return ztr;
}
int main(){
    int n;
    cin>>n;

    cout<<countandsay(n);
    return 0;
}