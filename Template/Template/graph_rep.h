//
//  graph_rep.h
//  Template
//
//  Created by Mehedi Hasan on 20/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef graph_rep_h
#define graph_rep_h

// The most common way to define graph is to use adjacency matrix // example:
//     (1) (2) (3) (4) (5)
// (1)  2   0   5   0   0
// (2)  4   2   0   0   1
// (3)  3   0   0   1   4
// (4)  6   9   0   0   0
// (5)  1   1   1   1   5
// it’s always a square matrix.
// suppose a graph has n nodes, if given exactly adjacency matrix

for (int i = 1; i <= n; i++)
    for (int j = 1; i <= n; j++)
        cin << a[i][j] << endl;
// Usually will go like this representation in data // start_node end_node weight
// suppose m lines

for (int i = 1; i <= m; i++) {
    int x = 0, y = 0, t = 0;
    cin >> x >> y >> t;
    a[x][y]=t; // if undirected graph a[y][x]=t;
 }

// another variant: on the ith line, has data as
// end_node weight
// when you read data, you can assign matrix as
a[i][x]=t;
// if undirected graph
a[x][i]=t;

// Initialization of graph !!!IMPORTANT
// Depends on usage, normally initialize as 0 for all elements in matrix.
// so that 0 means no connection, non-0 means connection
// (for problem without weight, use weight as 1)
// If weights are important in this context (especially searching for path)
// Initialize graph as infinity for all elements in matrix.
// Another way to store graph is Adjacency list
// No space advantage if using array (unknown maximum number for in-degree). // Big space advantage if using dynamic data structure (like list, vector).
// each row represent a node and its connectivity.
// we don’t need it so much due to it’s search efficiency.
// let’s define a node as

struct Node {
    int id; // node id
    int w; // weight
};

// suppose n nodes and m lines of inputs as
// start_node end_node weight
// assume using <vector> in this example
// g is a vector, and each element of g is also a vector of Node

for (int i = 1; i <= m; i++) {
    int x = 0, y = 0, t = 0;
    cin >> x >> y >> t;
    Node temp;
    temp.id=y;
    temp.w=t;
    g[x].push_back(temp);
    
    // if undirected
    temp.id=x;
    g[y].push_back(temp);
}

// Note that you don’t need this node structure if graph has only connectivity information.

/**** Special Structure ****/
// Special structure here is usually not a typical graph, like city-blocks, triangles
// They are represented in 2-d array and shows weights on nodes instead of edges.
// Note that in this case travel through edge has no cost, but visit node has cost.
// Triangles: Read data like this
// 1
// 1 2
// 4 2 7
// 7 3 1 5
// 6 2 9 4 6

for (int i = 1; i <= n; i++)
    for (int j = i; j <= n; j++)
        cin >> a[i][j];

// More complex data structures: typical city-block structure may has some constraints on
// questions, but it has no boundaries. However, some questions requires to form a maze.
// In these cases, data structures can be very flexible, it totally depends on how the question
// presents the data. A usual way is to record it’s adjacent blocks information:

struct Block{
    bool l[4];
    
    // if has 8 neighbors then use bool l[8];
    // label them as your favor, e.x.
    // 1 123
    // 4x2 8x4
    // 3 765
    // true if there is path, false if there is boundary
    // other informations (optional)
    
    int weight;
    int component_id;
    // etc.
};

// Note that usually we use array from index 1 instead of 0 because sometimes
// you need index 0 as your boundary, and start from index 1 will give you
// advantage on locating nodes or positions

#endif /* graph_rep_h */
