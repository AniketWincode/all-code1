#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    // push
    // pop
    // front -> top
    // size -> empty
    // back -> rear
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int x = q.size();
    while(x){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
        x--;
    }
    return 0;
}