#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int, int>
using namespace std;

vector<list<pp>> gr; // pair<vertex, wt>
void add_edge(int u, int v, int wt, bool bidir=true){
    gr[u].push_back({v,wt});
    if(bidir){
        gr[v].push_back({u, wt});
    }
}

ll prims(int src, int n){ // n-> number of number of vertex
    priority_queue<vector<pp>, vector<pp>, greater<pp>> pq; // pair<wt, node> // binary heap
    unordered_set<int> vis;
    vector<int> par(n+1); // use of printing the minimum spanning tree
    unordered_map<int, int> mp;
    for(int i=1;i<=n;i++){ // initialization of map as a default // 1 based indexing
        mp[i] = INT_MAX;
    }
    pq.push({0, src}); // wt, vertex
    mp[src] = 0;
    int total_count = 0; // 0 -> n-1 // n-1 edges
    int result = 0; // sum of wts
    while(total_count < n && !pq.empty()){
        pp curr = pq.top();
        if(vis.count(curr.second)){ // count is greater than 0
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result += curr.first;
        pq.pop();
        for(auto neighbour : gr[curr.second]){
            if(!vis.count(neighbour.first) && mp[neighbour.first] > neighbour.second){
                pq.push({neighbour.second, neighbour.first});
                par[neighbour.first] = curr.second;
                mp[neighbour.first] = neighbour.second;
            } 
        }
    }
    return result;
}
int main(){
    int n, m;
    cin>>n>>m;
    gr.resize(n+1, list<pair<int, int>> ()); // one based indexing
    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }
    int src;
    cin>>src;
    cout<<prims(src, n)<<endl;
    return 0;
}