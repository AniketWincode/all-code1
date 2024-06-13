#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited){ // recursive call
    visited.insert(node);
    for(auto neighbor : graph[node]){
        if(not visited.count(neighbor)){
            dfs(neighbor, visited);
        }
    }
}

int connectedcomponent(){
    int result = 0;
    unordered_set<int> visited; // O(v)
    for(int i=0;i<v;i++){
        // go to every vertex
        // if from a vertex we can initialize a dfs, we got one more component
        if(visited.count(i) == 0){
            result++;
            dfs(i, visited); // O(v+e)
        }
    }
    return result;
}

int main(){
    
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    cout<<connectedcomponent()<<"\n";
}