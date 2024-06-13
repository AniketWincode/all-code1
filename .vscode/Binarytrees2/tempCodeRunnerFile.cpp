
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

void topview(Node* root){
    unordered_map<int, int> m;
    queue<pair<Node*,int>> q;
    pair<Node*, int> r;
    r.first = root;
    r.second = 0;