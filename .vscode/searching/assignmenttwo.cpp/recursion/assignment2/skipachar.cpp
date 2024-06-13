// #include<iostream>
// using namespace std;

// void removechar(string str, string str1, int i){
//     if(i==str.size()){
//         cout<<str1<<endl;
//         return;
//     }
//     if(str[i]!='a'){
//         str1 += str[i];
//     }
//     return removechar(str, str1, i+1);
// }
// int main(){

//     string str = "raghav garg";

//     removechar(str, "", 0);
//     return 0;
// }

#include<iostream>
using namespace std;

void removechar(string str, string str1){
    if(str.length() == 0){
        cout<<str1;
        return;
    }
    char ch = str[0];
    if(ch == 'a'){
        removechar(str.substr(1), str1);
    }
    else{
        removechar(str.substr(1), str1+ch);
    }
}
int main(){

    string str = "raghav garg";
    removechar(str, "");
    return 0;
}