// Node implementation
// unlimited size
#include<iostream>
using namespace std;
class Node{
    public:
    Node* head;
    int val;
    Node* next;
    int size;
    Node(){
        head = NULL;
        size = 0;
    }
    Node(int val){
        this->val = val;
        this->next = NULL;
        // size = 0;
    }
    int push(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty!"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    void display(){
        Node* temp = head;
        if(temp==NULL){
            return;
        }
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Node st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    st.display();
    
    return 0;
}