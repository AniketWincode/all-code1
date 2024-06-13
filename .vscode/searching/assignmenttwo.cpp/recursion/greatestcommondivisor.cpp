#include<iostream>
using namespace std;
int highestcommondivisor(int a, int b){  // time complexity is O(min(a,b));
    for(int i=min(a, b);i>=2;i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}

int gcd(int a, int b){  // time complexity is log(a+b)
    if(a==0){
        return b;
    }
    else{
        return gcd(b%a, a);
    }
}

int main(){
    int a = 27;
    int b = 69;
    // cout<<highestcommondivisor(a, b);
    cout<<gcd(a, b);
    return 0;
}
