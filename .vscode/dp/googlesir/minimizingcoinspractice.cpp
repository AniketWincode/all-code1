#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int x(vector<int> coins, int money){
    if(money==0){ // VIMP
        return 0;
    }
    if(money<0){
        return 0;
    }
    int result = INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(money - coins[i] < 0){
            continue;
        }
        result = min(result, x(coins, money-coins[i]));
    }
    return 1+result;
}
int main(){
    int n;
    cin>>n;
    vector<int> coins;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coins.push_back(x);
    }
    int money;
    cin>>money;
    cout<<x(coins, money)<<"\n";
    return 0;
}