#include<iostream>
using namespace std;
class Node{ // Linked List Node
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    // Node a;
    // a.val = 20;
    // Node b;
    // b.val = 30;
    // Node c;
    // c.val = 40;
    // Node d;
    // d.val = 50;
    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // cout<<(*(a.next)).val<<endl;
    // print karani hai d ki value
    // cout<<(*((*((*(a.next)).next)).next)).val;
    // cout<<a.next->next->next->val; // same line
    // cout<<(a.next)->next->val<<endl;

    // Node* temp = &a;
    Node temp = a;
    while(1){
        // cout<<temp->val<<" ";
        cout<<temp.val<<" ";
        if(temp.next==NULL){
            break;
        }
        temp = *(temp.next);
    }
    return 0;
}