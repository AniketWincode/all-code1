#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minProduct(vector<int> &arr){
    int countpoasitive = 0;
    int countnegative = 0;
    int countzeroes = 0;
    int productpositive = 1;
    int productnegative = 1;
    int largestnegative = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0){
            countnegative++;
            productnegative *= arr[i];
            largestnegative = max(largestnegative, arr[i]);
        }
        if(arr[i] == 0){
            countzeroes++;
        }
        if(arr[i] > 0){
            countpoasitive++;
            productpositive *= arr[i];
        }
    }
        if(countnegative == 0){
            if(countzeroes > 0){
                return 0;
            }
            else{
                auto it = min_element(arr.begin(), arr.end());
                return *it;
            }
        }
        else{
            if(countnegative % 2 == 0){
                // even
                return (productnegative / largestnegative) * productpositive;
            }
            else{
                // odd
                return productnegative * productpositive;
            }
        }
}
int main(){
    vector<int> arr = {-2, -3, 1, 4, -2, -5};
    cout<<minProduct(arr);
    return 0;
}