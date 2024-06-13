#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string str1;
    getline(cin,str1);

    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());


    if(str==str1){
        cout<<true;
    }
    else{
        cout<<false;
    }
    // if(str.size()!=str1.size()){
    // for(int i=0;i<str.size();i++){
    //     if(str[i]!=str1[i]){
    //         cout<<"not a anagrams"<<endl;
    //         break;
    //     }
    // }
    //   cout<<"anagrams"<<endl;     
    // }
    // else{
    //     cout<<"not a anagrams"<<endl;
    // }
    
    return 0;
}