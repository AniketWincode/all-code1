#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool cmp(int x, int y){
    return x > y;
}
// class customcamparator{ // min heap class
//     public:
//     bool operator()(int a, int b){
//         return a > b;
//     }
// };
int main(){
    // priority queue is not a function it is data structures
    // priority_queue<int> pq; // max heap
    // priority_queue<int, vector<int> , customcamparator> pq; // what is difference // function is not directly use class , min heap
    // priority_queue<int, vector<int>, greater<int>> pq; // min heap
    // pq.push(5);
    // pq.push(4);
    // pq.push(9);
    // using vector make priority queue
    vector<int> v = {4, 3, 5, 1, 6, 17};
    // priority_queue<int>pq (v.begin(), v.end()); // max heap
    // priority_queue pq(v.begin(), v.end(), customcamparator); // why not give the data type // use for interview
    priority_queue<int, vector<int> , function<bool(int, int)> > pq(cmp); // using a functor // when we dont use a fucntor then we don't need a class // we need a class using a operator // passing a functiona pointer
    pq.push(5);
    pq.push(4);
    pq.push(9);
    cout<<pq.top()<<" ";
    return 0;
}