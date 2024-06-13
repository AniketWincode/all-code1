#include<iostream>
#include<climits>
#include<queue>
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
void preorder(Node* root){
    
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void nthlevelelementsRev(Node* root, int curr, int levels){
    
    if(root==NULL){
        return;
    }
    if(curr==levels){
        cout<<root->val<<" ";
        return; // optimised approach
    }
    nthlevelelementsRev(root->right, curr+1, levels);
    nthlevelelementsRev(root->left, curr+1, levels);
}

void nthlevelelements(Node* root, int curr, int levels){
    
    if(root==NULL){
        return;
    }
    if(curr==levels){
        cout<<root->val<<" ";
        return; // optimised approach
    }
    nthlevelelements(root->left, curr+1, levels);
    nthlevelelements(root->right, curr+1, levels);
}

int levels(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1+max(levels(root->left), levels(root->right));
}

void levelOrder1(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthlevelelementsRev(root, 1, i);
        cout<<endl;
    }
}

void levelOrder(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthlevelelements(root, 1, i);
        cout<<endl;
    }
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

void levelOrderQueue(Node* root){ // bfs
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    cout<<endl;
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
    // preorder(a);
    // cout<<endl;
    // inorder(a);
    // cout<<endl;
    // postorder(a);
    // nthlevelelements(a, 0);
    // levelOrder1(a);
    levelOrderQueue(a);
    return 0;
}