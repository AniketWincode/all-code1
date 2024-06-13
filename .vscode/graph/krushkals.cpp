// https://www.hackerrank.com/challenges/kruskalmstrsub/problem
#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int find(vector<int> &parent, int a){
    return parent[a] = ((parent[a]==a) ? a : find(parent, parent[a]));
}

void Union(vector<int> &par, vector<int> &rank, int a, int b){
    a = find(par, a);
    b = find(par, b);
    if(a==b){
        return;
    }
    if(rank[a] > rank[b]){
        rank[a]++;
        par[b] = a;
    } 
    else{
        rank[b]++;
        par[a] = b;
    }
}

struct Edge {
    int src;
    int dest;
    int wt;
};

bool cmp(Edge e1, Edge e2){
    return e1.wt < e2.wt;
}

ll kruskals(vector<Edge> &input, int n, int e){ // O(v+elog(e))
    sort(input.begin(), input.end(), cmp); // elog(e)
    vector<int> parent(n+1);
    vector<int> rank(n+1, 1);
    for(int i=0;i<=n;i++){ // initially all are parent of inself
        parent[i] = i;
    }
    int edgecount = 0; // n-1
    int i = 0; // which edges you are present
    int ans = 0;
    while(edgecount < n-1 && i < input.size()){ // v-1 -> O(vlog*(v))
        Edge curr = input[i]; // because input is sorted we will get min wt edge
        int srcPar = find(parent, curr.src);
        int destPar = find(parent, curr.dest);
        if(srcPar != destPar){
            // include edge as this will not make cycle
            Union(parent, rank, srcPar, destPar);
            ans += curr.wt;
            edgecount++;
        }
        i++; // doesnt matter u picked the last edge or not, we still need to go to next edge
    }
    return ans;
}

int main(){
    int n;
    int e;
    cin>>n>>e;
    vector<Edge> v(e); // VIMP
    for(int i=0;i<e;i++){
        cin>>v[i].src;
        cin>>v[i].dest;
        cin>>v[i].wt;
    }
    cout<<kruskals(v, n, e)<<endl;
    return 0;
}