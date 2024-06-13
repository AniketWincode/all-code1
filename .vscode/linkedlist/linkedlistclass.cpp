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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size = 0;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is Empty!"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"List is Empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }
    void deleteatidx(int idx){
        if(size==0){
            cout<<"List is Empty!"<<endl;
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return;
        }
        else if(idx==0){
            deleteAtHead();
        }
        else if(idx==size-1){
            deleteattail();
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void traverse() {
        while(head and head->next) {
        cout << head->val <<" ";
        head = head->next->next;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertathead(int val){
        // Node* temp = head;
        Node* curr = new Node(val);
        curr->next = head;
        head = curr;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
        }
        else if(idx==0){
            insertathead(val);
            // return;
        }
        else if(idx==size){
            insertAtEnd(val);
        }
        else{
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx == size-1){
            return tail->val;
        }
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
};
int main(){
    LinkedList ll; // { }
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertathead(50);
    ll.display();
    ll.insertAtIdx(4, 60);
    ll.display();
    // cout<<ll.getAtIdx(1);
    // ll.deleteAtHead();
    // cout<<endl;
    // ll.display();
    // ll.deleteattail();
    // ll.display();
    // ll.deleteatidx(3);
    // ll.display();
    ll.traverse();
    // cout<<ll.size;
    return 0;
}