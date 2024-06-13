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

Node* construct(int arr[], int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN){
            l = new Node(arr[i]);
        }
        else{
            l = NULL;
        }
        if(j!=n && arr[j]!=INT_MIN){
            r = new Node(arr[j]);
        }
        else{
            r = NULL;
        }
        temp->left = l;
        temp->right = r;
        if(l!=NULL){
            q.push(l);
        }
        if(r!=NULL){
            q.push(r);
        }
        i += 2;
        j += 2;
    }
    return root;
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
        nthlevelelements(root, 1, i);
        cout<<endl;
    }
}

void leftBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL){
        leftBoundary(root->right);        
    }
}

void bottomBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    
    rightBoundary(root->right);
    if(root->right==NULL){
        rightBoundary(root->left);
    }
    cout<<root->val<<" ";
}
int main(){
    // construct
    int arr[] = {1,2,3,INT_MIN,5,INT_MIN,4, INT_MIN, INT_MIN ,7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr, n);
    // boundary traversal
    // leftBoundary(root);
    // bottomBoundary(root);
    rightBoundary(root);
    // levelOrder1(root);
    return 0;
}