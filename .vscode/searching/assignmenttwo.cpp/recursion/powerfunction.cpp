// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     int ans = 1;
//     for(int i=0;i<b;i++){
//         ans = ans*a;
//     }
//     return ans;
// }

// int power1(int a, int b){

//     int ans = 1;
//     if(b==0){
//         return 1;
//     }

//     // ans *= a;
//     // cout<<ans<<" ";
//     return a*power1(a, b-1);
// }
// int main(){

//    cout<<power1(2,3);
//     return 0;
// }

#include<iostream>
using namespace std;

int pow(int x, int n){

    if(n==0){
        return 1;
    }

    if(n%2==0){
        int ans = pow(x,n/2);
        return ans*ans;
    }
    else{
        int ans = pow(x,n/2);
        return ans*ans*x;
    }
}
int main(){

    cout<<pow(2, 3);
    return 0;
}