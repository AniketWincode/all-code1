#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void displayTree(Node* root){
    
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int ans = root->val + sum(root->left) + sum(root->right);
    return ans;
}

int size(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
}
int maxiintree(Node* root){ // maximum value in binary tree
    // base case
    if(root==NULL){
        return INT_MIN; // VIMP
    }
    return max(root->val, max(maxiintree(root->left), maxiintree(root->right)));
    // return max(root->val, maxi(root->left));
}
int heightoftree(Node* root){
    if(root==NULL){
        return 0;
    }
    int max1 =  heightoftree(root->right); // 1 + recursion call important
    int max2 = heightoftree(root->left); // 1 + recursion call important
    return 1+max(max1, max2);
}

int main(){
    Node* a = new Node(1); // root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxiintree(a)<<endl;
    cout<<heightoftree(a)-1<<endl;
    return 0;
}