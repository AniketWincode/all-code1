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

    if(str1==str){
        cout<<"Anagrams"<<endl;
    }
    else{
        cout<<"not anagrams"<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    // int arr[26];
    vector<int>freq(26, 0);
    // cout<<int('a');
    // cout<<int('z');
    for(int i=0;i<str.size();i++){
        int x = int(str[i]);
        freq[x-97]++;
    }

    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }

    cout<<endl;

    int maxi = freq[0];
    for(int i=0;i<26;i++){
        maxi = max(maxi, freq[i]);
    }

    for(int i=0;i<26;i++){
        if(freq[i]==maxi){
            cout<<char(i+97)<<" "<<maxi<<endl;
        }
    }

    cout<<maxi<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    // stoi convert string integer to integer
    string str;
    // cin>>str;
    getline(cin, str);
    int x = stoi(str); // see ans when spaces are given in input string
    cout<<x<<endl;

    string str1;
    cin>>str1;
    int long long x1 = stoll(str1);
    cout<<x1<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    string arr[5] = {'0123', '0023', '456', '00182', '940', '2901'};
    
    int maxi = stoi(arr[0]);
    for(int i=1;i<=5;i++){
        int x = stoi(arr[i]);
        maxi = max(maxi, x);
    }

    cout<<maxi<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    // string str1;
    // cin>>str1;
    // if(str==str1){
    //     cout<<"correct"<<endl;
    // }
    // else{
    //     cout<<"incorrect"<<endl;
    // }

    string goal = "cdeab";
    char ch = goal[0];
    int x = 0;
    for(int i=0;i<s.size();i++){
        if(ch == str[i]){
            break;
        }
        else{
            x++;
        }
    }
    // x++;
    string str1 = "";
    for(int i=0;i<s.size();i++){
        str1 += s[(i+x)%s.size()];
    }
    cout<<str1<<" ";
    if(str1==goal){
        cout<<str1<<" "<<goal<<endl;
        cout<<"correct"<<endl;
    }
    else{
        cout<<str1<<" "<<goal<<endl;
        cout<<"incorrect"<<endl;
    }

    // cout<<str1<<endl;
    return 0;
}