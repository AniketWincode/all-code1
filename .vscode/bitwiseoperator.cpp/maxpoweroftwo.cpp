#include<iostream>
using namespace std;
int maxpowerof2(int number){
    number = number | (number>>1);
    number = number | (number>>2);
    number = number | (number>>4);
    number = number | (number>>8);
    number = number | (number>>16);

    return (number+1)>>1;
}
int main(){

    int x = 9;
    int temp;
    while(x!=0){
        temp = x;
        x = (x & (x-1));
    }

    // cout<<temp<<" ";

    // when interviver ask power is just greater than number just temp*2
    cout<<8192*2*2*2*2<<endl;
    int y = 8192*2*2*2*2;
    cout<<maxpowerof2(y)<<endl;
    return 0;
}