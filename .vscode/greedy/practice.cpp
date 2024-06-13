#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int, int>&p1, pair<int, int>&p2){ // VIMP 
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1 > r2;
}
double fractionalknapsack(vector<int> &profits, vector<int> &weights, int n, int w){
    vector<pair<int, int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profits[i], weights[i]});
    }
    sort(arr.begin(), arr.end(), cmp);
    double result = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second <= w){
            result += arr[i].first;
            w -= arr[i].second;
        }
        else{
            result += (arr[i].first/arr[i].second)*w;
            w = 0;
            break;
        }
    }
    return result;
}
int main(){
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int w = 50;
    int n = 3;
    cout<<fractionalknapsack(profit, weights, n, w);
    return 0;
}