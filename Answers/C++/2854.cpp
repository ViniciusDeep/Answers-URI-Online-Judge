/*
Celso Antonio --- August 2018
*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <bits/stdc++.h>
#include <map>

typedef long long int ll;

using namespace std;

vector<pair<int, pair<string, string>>> adj;
vector<int> vis;
int n = 0;
int val = 1;

void dfs(int v){
    vis[v] = val;
    
    //cout << adj[v].second.first << " - " << adj[v].second.second << endl;
    
    for(int i = 0; i < adj.size(); i++){
        if(!vis[i])
            if(adj[i].second.first == adj[v].second.first or adj[i].second.first == adj[v].second.second or adj[i].second.second == adj[v].second.second or adj[i].second.second == adj[v].second.first)
                dfs(i);
    }
    
}

int main()
{
    
    int n, m;
    string s, ph;
    
    while(cin >> n >> m){
        
        for(int i = 0; i < m; i++){
            cin >> s >> ph >> ph;
            adj.push_back(make_pair(i, make_pair(s, ph)));
        }
        
        
        for(int i = 0; i < m; i++){
            vis.push_back(0);
        }
        
        
        for(int i = 0; i < m; i++){
            if(!vis[i]){
                dfs(i);
                val++;
            }
        }
        
        cout << *max_element(vis.begin(), vis.end()) << endl;
        
    }
    
    return 0;
}