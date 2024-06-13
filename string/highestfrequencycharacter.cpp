// Given a string consistings of lowercase English alphabets. Print the character that is occurring most number of times.
/*#include<iostream>
using namespace std;
int main(){
    string str = "physicswallah";
    
    int max1 = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        max1 = max(max1, count);
    }
    // cout<<max1<<endl;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count = 1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==max1){
            cout<<ch<<" "<<max1<<endl;
        }
    }
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;

    vector<int>freq(26, 0);
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        int ascii = int(ch);
        freq[ascii-97]++;
    }

    int max1 = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>max1){
            max1 = freq[i];
        }
    }

    for(int i=0;i<26;i++){
        if(freq[i]==max1){
            cout<<char(i+97)<<" "<<max1<<endl;;
        }
    }

    return 0;
}