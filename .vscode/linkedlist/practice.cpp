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
        head = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = temp;
        }
        // else{
        //     tail->next = temp;
        //     tail = temp;
        // }
        // size++;
        else{
        Node* newNode = head;
        while(newNode->next!=NULL){
            newNode = newNode->next;
        }
        newNode->next = temp;
        temp->next = NULL;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.insertAtEnd(80);
    ll.insertAtEnd(90);
    ll.display();
    ll.insertAtHead(10);
    ll.display();
    ll.display();
    cout<<ll.size<<endl;
    return 0;
}