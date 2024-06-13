#include<bits/stdc++.h>
#define pp pair<int, int>
#define ll long long int
using namespace std;

vector<list<pp>> gr; // pair<vertex, wt>
void add_edge(int u, int v, int wt, bool bidir=true){
    gr[u].push_back({v, wt});
    if(bidir){
        gr[v].push_back({u, wt});
    }
}

unordered_map<int, int> dijkstra(int src, int n){ // n -> number of vertex
    priority_queue<vector<pp>, vector<pp>, greater<pp>> pq; // pqir<wt, node> // binary heap
    unordered_set<int> vis;
    vector<int> via(n); // use of printing the minimum spanning tree
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){ // initialization of the map as a default // 1 based indexing
        mp[i] = INT_MAX;
    }
    pq.push({0, src}); // wt, vertex
    mp[src] = 0;
    while(!pq.empty()){
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second); // insert a node
        for(auto neighbour : gr[curr.second]){
            if(!vis.count(neighbour.first) && mp[neighbour.first] > mp[curr.second] + neighbour.second){ // VIMP
                pq.push({mp[curr.second] + neighbour.second, neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }
    }
    return mp;
}
int main(){
    int n, m;
    cin>>n>>m;
    gr.resize(n, list<pair<int, int>> ());
    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }
    int src;
    cin>>src;
    unordered_map<int, int> sp = dijkstra(src, n);
    int dest;
    cin>>dest;
    cout<<sp[dest]<<"\n";
    return 0;
}