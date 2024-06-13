// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// input : str = "a"
// Output : "a"
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "Pbwcshkuiglhlds";
    for(int i=0;i<str.size();i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
    
    cout<<str<<endl;
    return 0;
}*/

// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisna
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdefgh";
    reverse(str.begin() + str.size()/2, str.end());
    cout<<str<<endl;
    return 0;
}*/

// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "3244";
    int val = 0; 
    int pw = 1;
    while(str.size()>0){
        val += pw*(str.back() - '0');
        str.pop_back();
        pw *= 10;
    }
    cout<<val<<endl;
    return 0;
}*/