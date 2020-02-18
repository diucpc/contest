//
//  sort__selection.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef sort__selection_h
#define sort__selection_h
#include "algorithm.h"

void selectionSort(int num[n]) {
    for (int i = 0; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (num[i] > num[j]) swap(num[i], num[j]);
        }
    }
}


#endif /* sort__selection_h */
