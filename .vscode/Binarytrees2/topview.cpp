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

// minimum and maximum level
void HorLevel(Node* root, int &minLevel, int &maxLevel, int level){
    if(root==NULL){
        return;
    }
    minLevel = min(minLevel, level);
    maxLevel = max(maxLevel, level);
    HorLevel(root->left, minLevel, maxLevel, level-1);
    HorLevel(root->right, minLevel, maxLevel, level+1);
}

void topview(vector<int> &top, Node* root, int level){
    if(root==NULL){
        return;
    }
    if(top[level]==INT_MIN){
        top[level] = root->val;
    }
    topview(top, root->left, level-1);
    topview(top, root->right, level+1);
}
int main(){
    // construct
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, 9, INT_MIN, INT_MIN, 7, INT_MIN, INT_MIN, INT_MIN, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr, n);
    // boundary traversal
    // levelOrder1(root);
    int minLevel = 0;
    int maxLevel = 0;
    HorLevel(root, minLevel, maxLevel, 0);
    // cout<<minLevel<<" ";
    // cout<<maxLevel<<" ";
    int horLevels = maxLevel - minLevel + 1;
    vector<int> top(horLevels, INT_MIN);
    topview(top, root, -minLevel); // VIMP
    for(int i=0;i<horLevels;i++){
        cout<<top[i]<<" ";
    }
    return 0;
}