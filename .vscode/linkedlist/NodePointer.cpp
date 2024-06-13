#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if(head==NULL){
            return;
        }
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtEnd(Node* head, int val){
    Node* temp = head;
    Node* curr = new Node(val);
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = curr;
    curr->next = NULL;
    
}
// void insertAtHead(Node* head, int val){
//     // Node* temp = head;
//     Node* curr = new Node(val);
//     curr->next = head;
//     head = curr;
// }
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void displayreverse(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return;
    }
    displayreverse(temp->next);
    cout<<temp->val<<" ";
}
void displayrec(Node* head){
    Node* temp = head;
    if(temp==NULL){
        return;
    }
    cout<<temp->val<<" ";
    displayrec(temp->next);
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    Node* h = new Node(80);
    // Node* i = new Node(90);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    insertAtEnd(a, 90);
    insertAtHead(a, 9);
    // Node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
    // display(a); // pass the head of linked list
    displayrec(a); // a pass by value
    cout<<endl;
    // displayreverse(a);
    // cout<<size(a);
    return 0;
}