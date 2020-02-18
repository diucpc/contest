//
//  segment_tree__build.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef segment_tree__build_h
#define segment_tree__build_h

void build(int at, int L, int R) {
    sum[at] = 0;
    if (L == R) return;
    int mid = (L + R) / 2;
    build(at * 2, L, mid);
    build(at * 2 + 1, mid + 1, R);
}

#endif /* segment_tree__build_h */
