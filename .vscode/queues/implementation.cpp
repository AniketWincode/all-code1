#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int front;
    int b;
    vector<int> arr;
    Queue(int val){
        front = 0;
        b = 0;
        vector<int> v(val);
        arr = v;
    }
    void push(int val){
        if(b>arr.size()){
            cout<<"Queue is full!"<<endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop(){
        if(front-b==0){
            cout<<"Queue is empty"<<" ";
            return;
        }
        front++;
    }
    int top(){
        if(front-b==0){
            cout<<"Queue is empty"<<" ";
            return -1;
        }
        return arr[front];
    }
    int back(){
        if(front-b==0){
            cout<<"Queue is empty"<<" ";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return front-b;
    }
    bool empty(){
        if(front-b==0){
            return true;
        }
        else{
            return false;
        }
    }
    
    void display(){
        for(int i=front;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.display();
    q.pop();
    q.display();
    return 0;
}