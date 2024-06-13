#include<iostream>
#include<algorithm>
using namespace std;
void binary(int number){
    if(number<=0){
        return;
    }
    binary(number/2);
    cout<<number%2;
}

void decimal(string str, int n, int x, int ans){
    if(n < 0){
        cout<<ans<<endl;
        return;
    }        
    char ch = (str[n]);
    ans += int(ch-'0')*x; // important conversion
    decimal(str, n-1, x*2, ans);
}
int main(){
    // long long number;
    // cin>>number;
    // binary(number);
    string str;
    cin>>str;
    int n = str.size()-1;
    decimal(str,n, 1, 0);
    return 0;
}