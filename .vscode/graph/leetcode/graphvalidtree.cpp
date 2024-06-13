#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<list<int>> graph;
int v = 5;
void add_edges(int a, int b, bool bidir=true){
    graph[a].push_back(b);
    if(bidir){
        graph[b].push_back(a);
    }
}

void topobfs(){
    // kahn's algorithms
    vector<int> indegree; // incoming edges
    for(int i=0;i<v;i++){
        for(int neighbours : graph[i]){
            indegree[neighbours]++;
        }
    }
    queue<int> qu;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            qu.push(i);
            visited.insert(i);
        }
    }
    while(not qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbours : graph[node]){
            if(not visited.count(neighbours)){
                indegree[neighbours]--;
            }
            if(indegree[neighbours]==0){
                qu.push(neighbours);
                visited.insert(neighbours);
            }
        }
    }
}
int main(){
    // int n = 5;
    // cin>>n;
    // v = n;
    int e = 4;
    while(e>0){
        int x;
        int y;
        cin>>x>>y;
        add_edges(x, y, true);
        e--;
    }
    topobfs();
    return 0;
}