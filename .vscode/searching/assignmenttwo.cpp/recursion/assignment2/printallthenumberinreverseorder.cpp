/*#include<iostream>
using namespace std;

void print(int i, int number){

    if(number == 0){
        return;
    }
    if(i==number+1){
        return;
    }
    cout<<i<<" ";
    print(i+1 ,number);
    // cout<<number<<" ";
    // print(i, number - 1);
}

void print1(int number){
    
    if(number == 0){
        return;
    }

    cout<<number<<" ";
    print1(number-1);
}
int main(){

    int number;
    cin>>number;

    print(1,number);
    print1(number-1);
    return 0;
}*/

#include<iostream>
using namespace std;

void print(int i, int number){
    // if(number == 0){
    //     return;
    // }

    if(i==number+1){
        return;
    }

    cout<<i<<" ";
    print(i+1,number);
    if(i==1){
        return;
    }
    cout<<i-1<<" ";
}
int main(){

    int number;
    cin>>number;
    
    print(1,number);
    return 0;
}