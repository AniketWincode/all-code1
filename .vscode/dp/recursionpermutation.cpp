/* you are givem a string consisiting of small alphabets consider no repitation in the chracters print all possible permutations */
// all possible arrengnments
// every character is given in string a chance to become a siffix of a group of permutation
#include<iostream>
using namespace std;

void permutation(string input, string output){
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
        char ch = input[i];
        string left = input.substr(0, i); // O(n) operation
        string right = input.substr(i+1);
        string ros = left + right;
        permutation(ros, output+ch);
    }
}
int main(){

    permutation("abc", "");
    return 0;
}