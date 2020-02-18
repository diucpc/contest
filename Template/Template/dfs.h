//
//  dfs.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef dfs_h
#define dfs_h

#include <vector>

vector<int> adj[100];
int vis[100];

void dfs(int at) {
    if (vis[at]) return;
    vis[at] = 1;
    
    for (int i = 0; i < vis[at].size(); i++)
        dfs(vis[at][i]);
}

#endif /* dfs_h */
