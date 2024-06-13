#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    if(n==0){
        return ans;
    }
    ans = n*factorial(n-1);
}
int main(){

    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }