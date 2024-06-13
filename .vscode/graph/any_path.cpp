#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
// time complexity O(v+e)
// space complexity O(v)
vector<list<int> > graph;
unordered_set<int> visited;
int v; // no of edges
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end){
    if(curr == end){ // base case // VIMP
        return true;
    }
    visited.insert(curr); //mark visited
    for(auto neighbour : graph[curr]){ // traverse to every node
        if(not visited.count(neighbour)){ // not visited then goes to every neighbours in graph
            bool result = dfs(neighbour, end);
            if(result){ // VIMP
                return true;
            }
        }
    }
    return false;
}

bool anyPath(int src, int dest){
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
    int y;
    cin>>x>>y;
    cout<<anyPath(x, y)<<"\n";
    return 0;
}