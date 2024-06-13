// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a = 1;
//     int b = 1;
//     int sum = 2;
//     for(int i=0;i<n;i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//         cout<<sum;
//     }
//     return 0;
// }

// using recursion 
/*#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){

    cout<<fibo(18);
    return 0;
}*/

#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int main(){

    cout<<pow(2,3);
    return 0;
}