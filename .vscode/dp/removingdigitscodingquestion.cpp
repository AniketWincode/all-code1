#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    int y = 0;
    while(n!=0){
        inet number = n;
        y = 0;
        while(number>0){
            int x = number%10;
            y = max(y, x);
            number = number/10;
        }
        n = n - y;
        count++;
    }
    
    cout<<count<<"\n";
    return 0;
}