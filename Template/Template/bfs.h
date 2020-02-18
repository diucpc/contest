//
//  bfs.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef bfs_h
#define bfs_h

#include <vector>
#include <queue>

vector<int> adj[100];
int visited[100];

void bfs(int s, int n) {
    for (int i = 0; i < n; i++)
        vis[i] = 0;
    
    queue<int> Q;
    Q.push(s);
    visited[s] = 1;
    
    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == 0) {
                int v = adj[u][i];
                visietd[v] = 1;
                Q.push(v);
            }
        }
    }
}

#endif /* bfs_h */
