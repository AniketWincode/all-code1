// input a string and return the number of times the neighbouring characters are different from each other.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    // getline(cin, str);
    int count = 0;

    for(int i=0;i<str.length();i++){
        
        if(str.length() == 2 && str[0]!=str[1]){
            count = 1;
            break;
        }
        if(str.length()==1){ // for size string is one for string their is no neighbour
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        }  
        else if(i==str.size()-1){
                if(str[i]!=str[i-1]) count++;
            }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1])
                count++;
        }

    cout<<count<<endl;
    return 0;
}