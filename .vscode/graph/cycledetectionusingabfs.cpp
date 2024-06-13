#include<iostream>
#include<unordered_set>
#include<vector>
#include<list>
#include<queue>
using namespace std;

vector<list<int> > graph; 
int v; // no of vertices
void add_edge(int src, int dest, bool bi_dir = true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}

bool bfs(int src){
    unordered_set<int> vis;
    queue<int> qu;
    vector<int> par(v, -1);
    qu.push(src);
    vis.insert(src);
    while(not qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neighbours : graph[curr]){
            if(vis.count(neighbours) && par[curr] != neighbours){
                return true;
            }
            if(!vis.count(neighbours)){
                vis.insert(neighbours);
                par[neighbours] = curr;
                qu.push(neighbours);
            }
        }
    }
    return false;
}

bool has_cycle(){ // hint : source and parent
    unordered_set<int> visited;
    bool result = false;
    for(int i=0;i<v;i++){
        if(!visited.count(i)){
            result = bfs(i); // initial value
            if(result == true){
                return true;
            }
        }
    }
    return false;
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
    display();
    bool b = has_cycle();
    cout<<b<<"\n";
}