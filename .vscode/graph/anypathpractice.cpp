#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
unordered_set<int> visited;
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end){ // Time complexity O(v+e) // space complexity O(v) 
    if(curr == end){ // base case
        return true;
    }
    visited.insert(curr); // mark visited
    for(auto neighbour : graph[curr]){
        if(not visited.count(neighbour)){ // VIMP
            bool result = dfs(neighbour, end);
            if(result == true){
                return true;
            }
        }
    }
    return false;
}

bool any_path(int src, int dest){
    return dfs(src, dest);
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
    int x;
    cin>>x;
    int y;
    cin>>y;
    cout<<any_path(x, y)<<endl;
    return 0;
}