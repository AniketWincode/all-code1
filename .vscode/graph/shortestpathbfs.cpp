#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits>
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

void bfs(int src, vector<int> &dist){ // distance vector (distance form source to destication(that node))
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX); // distance vector
    dist[src] = 0; // means source ka source se distance is zero
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        cout<<curr<<" "; // to known which order bfs is traverse in graph // VIMP
        qu.pop();
        for(auto neighbour : graph[curr]){
            if(not visited.count(neighbour)){ // not visited
                qu.push(neighbour);
                visited.insert(neighbour);
                // current is parent of neighbours // to get which one this is parent of neighbour in graph
                dist[neighbour] = dist[curr] + 1; // source ka neigbour ka distance in graph // VIMP

            }
        }
    }
    cout<<endl;
}

int main(){

    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d); // birectional graph
    }
    int x;
    cin>>x;
    vector<int> dist;
    bfs(x, dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}