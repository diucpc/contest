//
//  permutation.h
//  Template
//
//  Created by Mehedi Hasan on 19/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef permutation_h
#define permutation_h

void permute(string a, int l, int r) {
    if (l == r) cout<<a<<endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

#endif /* permutation_h */
