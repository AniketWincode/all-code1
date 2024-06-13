#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#define inx INT_MAX
using namespace std;

vector<int> dp;
int x(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2 or n == 3){
        return 1;
    }
    return 1 + min({x(n-1), (n%2 == 0) ? x(n/2) : inx, (n%3 == 0) ? x(n/3) : inx}); // VIMP // it not give infinity because x(n-1) gives sum value in coding question
}

int topdown(int n){
    /*
     * Time : O(n) Space: O(n)
    */
    if(n == 1){
        return 0;
    }
    if(n == 2 or n == 3){
        return 1;
    }
    if(dp[n]!=-1){ // nth state is precomputed
        return dp[n];
    }
    // if dp[n] is -1, we need to compute first time this state
    return dp[n] = 1 + min({topdown(n-1), (n%2==0) ? topdown(n/2) : inx, (n%3==0) ? topdown(n/3) : inx});

}

int bottomup(int n){
    /*
     * Time : O(n)  Space: O(n)
    */
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i<=n; i++){
        dp[i] = 1 + min({dp[i-1], (i%2==0) ? dp[i/2] : inx, (i%3==0) ? dp[i/3] : inx});
    }
    return dp[n];
}
int main(){
    
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005, -1);
    // cout<<x(n)<<"\n";
    cout<<topdown(n)<<"\n";
    cout<<bottomup(n)<<"\n";
    return 0;
}