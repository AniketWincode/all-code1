#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(Node* head, Node* prev1){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
    while(prev1){
        cout<<prev1->val<<" ";
        prev1 = prev1->prev;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a, e);
    return 0;
}