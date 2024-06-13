#include<bits/stdc++.h>
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

void findSmallest(Node* &root, vector<string>& temp, string output){
    if(root == NULL)
        return;
    
    if(root->left == NULL && root->right == NULL){
        output.push_back('a' + root->val);
        temp.push_back(output);
        // output.pop_back();
        output.clear();
        return;
    }
    
    output.push_back('a' + root->val);
    findSmallest(root->left, temp, output);
    findSmallest(root->right, temp, output);
}

string smallestFromLeaf(Node* root) {
    vector<string> temp;
    string output = "";
    findSmallest(root, temp, output);
    
    for(int i=0; i<temp.size(); i++){
        string t = temp[i];
        reverse(t.begin(), t.end());
        temp[i] = t;
    }
    sort(temp.begin(), temp.end());
    
    return temp[0];
}

int main(){
    // construct
    int arr[] = {0,1,2,3,4,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr, n);
    // level order traversal
    // levelOrderQueue(root);
    cout<<smallestFromLeaf(root)<<endl;
    return 0;
}