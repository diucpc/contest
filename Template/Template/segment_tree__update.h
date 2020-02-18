//
//  segment_tree__update.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef segment_tree__update_h
#define segment_tree__update_h

void update(int at, int L, int R, int pos, int u) {
    if (L == R) {
        sum[at] += u;
        return;
    }
    
    int mid = (L + R) / 2;
    
    if (pos <= mid) update(at * 2, L, mid, pos, u);
    else update(at * 2 + 1, mid + 1, R, pos, u);
    
    sum[at] = sum[at * 2] + sum[at * 2 + 1];
}

#endif /* segment_tree__update_h */
