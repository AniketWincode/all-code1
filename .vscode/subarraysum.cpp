#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v =  { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxi = INT_MIN;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += v[k];
            }
            maxi = max(sum, maxi);
        }
    }
    cout<<maxi<<" ";
}