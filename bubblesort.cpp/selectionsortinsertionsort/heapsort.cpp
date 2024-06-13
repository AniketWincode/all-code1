#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    /*
     * Time : O(nlogn)
     * Space : O(1), because we use 
    */
    vector<int> v = {1, 3, 6, 8, 22, 15, 20, 9, 13, 30};;
    priority_queue<int, vector<int> , greater<int> > pq(v.begin(), v.end());
    int i = 0;
    while(pq.size()>0){
        v[i] = pq.top();
        pq.pop();
        i++;
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}