//
//  huffman.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef huffman_h
#define huffman_h

#include <vector>
#include <queue>
#include <functional>

int n, freq[100];

int huffman() {
    priority_queue<int, vector<int>, greater<int>> PQ;
    for (int i = 0; i < n; i++) PQ.push(freq[i]);
    while (PQ.size() != 1) {
        int a = PQ.top(); PQ.pop();
        int b = PQ.top(); PQ.pop();
        PQ.push(a + b);
    }
    return PQ.top();
}

#endif /* huffman_h */
