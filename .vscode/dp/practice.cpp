#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int x(int n){
    if(n==1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    return 1 + min({x(n-1), (n%3==0) ? x(n/3) : INT_MAX, (n%2==0) ? x(n/2) : INT_MAX});
}
int main(){
    int n;
    cin>>n;
    cout<<x(n);
    return 0;
}