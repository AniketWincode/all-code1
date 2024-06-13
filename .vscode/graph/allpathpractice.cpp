#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
// time complexity O(v+e)
// space complexity O(v)
vector<list<int> > graph;
unordered_set<int> visited;
vector<vector<int> > result;
int v; // no of edges
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int> &path){ // VIMP
    if(curr == end){ // base case
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return; 
    }
    visited.insert(curr); //mark visited
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){
            // cout<<neighbour<<"\n";
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void allPath(int src, int dest){
    vector<int> v;
    dfs(src, dest, v);
}

int main(){

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d); // birectional graph
    }
    int x;
    int y;
    cin>>x>>y;
    allPath(x, y);
    for(auto path : result){
        for(auto el : path){
            cout<<el<<" ";
        }
        cout<<"\n";
    }
    return 0;
}