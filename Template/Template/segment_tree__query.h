//
//  segment_tree__query.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef segment_tree__query_h
#define segment_tree__query_h

int query(int at, int L, int R, int l, int r) {
    if (r < L || R < l) return 0;
    if (l <= L && R <= r) return sum[at];
    int mid = (L + R) / 2;
    int x = query(at * 2, L, mid, l, r);
    int y = query(at * 2 + 1, mid + 1, R, l, r);
    return x + y;
}

#endif /* segment_tree__query_h */
