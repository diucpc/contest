//
//  graph.h
//  Template
//
//  Created by Mehedi Hasan on 19/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef graph_h
#define graph_h

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v << "\n head ";
        for (auto x : adj[v]) cout << "-> " << x;
        printf("\n");
    }
}

#endif /* graph_h */
