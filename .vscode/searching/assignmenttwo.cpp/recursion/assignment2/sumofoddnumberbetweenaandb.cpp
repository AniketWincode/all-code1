#include<iostream>
using namespace std;

void sumofoddnumber(int a, int b, int &sum){

    if(b==a+1){
        return;
    }

    if(b%2!=0){
        sum += b;
    }

    return sumofoddnumber(a,b-1,sum);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int sum = 0;
    sumofoddnumber(a,b-1,sum);

    cout<<sum;
    return 0;
}