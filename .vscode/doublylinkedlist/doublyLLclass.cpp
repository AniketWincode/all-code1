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
class doublylinkedlist{
    public:
    Node* head;
    Node* tail;
    int size = 0;
    doublylinkedlist(){
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
            temp->prev = tail; // extra
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
        if(head!=NULL){ // extra
        head->prev = NULL;            
        }
        if(head==NULL){ // extra
            tail = NULL;
        }

        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"List is Empty!"<<endl;
            return;
        }
        else if(size==1){ // extra
            deleteAtHead();
            return;
        }
        // Node* temp = head;
        // while(temp->next!=tail){
        //     temp = temp->next;
        // }
        Node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
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
            temp->next->prev = temp; // extra
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
        head->prev = curr; // extra
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
            newNode->prev = temp; // extra
            newNode->next->prev = temp; // extra
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
    doublylinkedlist list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    list.insertAtEnd(40);
    list.display();
    list.insertathead(50);
    list.display();
    list.insertAtIdx(2, 60);
    list.display();
    list.deleteattail();
    list.display();
    list.deleteatidx(3);
    list.display();
    cout<<list.getAtIdx(1);
    return 0;
}