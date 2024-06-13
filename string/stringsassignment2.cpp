// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "pw";
    reverse(str.begin(), str.end());
    string str1 = str;
    reverse(str.begin(), str.end());
    str.append(str1.begin(), str1.end());
    cout<<str;
    return 0;
}*/


// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "2947578";
    int x = stoi(str);
    int arr[str.size()];
    int i=0;
    while(x>0){
        arr[i] = x%10;
        x=x/10;
        i++;
    }

    int max = 0;
    int smax = 0;
    for(int i=0;i<str.size();i++){
        if(max < arr[i]){
            smax = max;
            max = arr[i];
        }
    }

    cout<<max<<" "<<smax<<endl;
    return 0;
}*/


// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str1;
    cin>>str1;

    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());

    if(str==str1){
        cout<<"anagrams"<<endl;
    }
    else{
        cout<<"not anagrams"<<endl;
    }
    return 0;
}*/

// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians (check the output)
// Input : str = "decode dsa with pw"
// Output : with
/*#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    
    vector<string> v;
    
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cout<<v[v.size()-1]<<endl;
    return 0;
}*/