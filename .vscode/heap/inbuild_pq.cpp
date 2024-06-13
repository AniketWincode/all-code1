#include<iostream>
#include<queue>
using namespace std;
int main(){
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    int arr[] = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    priority_queue<int> maxhp; // 
    // priority_queue<int, vector<int>, less<int>> hp; // max heap
    priority_queue<int, vector<int>, greater<int>> hp; // min heap
    priority_queue<int, vector<int>, greater<int>> minhpvector(v.begin(), v.end()); // min heap
    priority_queue<int> maxhparray(arr, arr+9); // maxheap
    hp.push(3);
    hp.push(4);
    hp.push(110);
    hp.push(9);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    // cout<<hp.top()<<endl; // build in priority queue in maxheap internally
    cout<<minhpvector.top()<<endl;
    return 0;
}