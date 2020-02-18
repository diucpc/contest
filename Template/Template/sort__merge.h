//
//  sort__merge.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef sort__merge_h
#define sort__merge_h

int num[100000], temp[100000];

void mergeSort(int _low, int _high) {
    if (_low == _high) return;
    
    int mid = (_low + _high) / 2;
    
    mergeSort(_low, mid);
    mergeSort(mid + 1, _high);
    
    int i, j, k;
    for (i = _low, j = mid + 1, k = _low; k <= _high; k++) {
        if (i == mid + 1) temp[k] = num[j++];
        else if (j == _high + 1) temp[k] = num[i++];
        else if (num[i] < num[j]) temp[k] = num[i++];
        else temp[k] = num[j++];
    }
    
    for (k = _low; k <= _high; k++) num[k] = temp[k];
}


#endif /* sort__merge_h */
