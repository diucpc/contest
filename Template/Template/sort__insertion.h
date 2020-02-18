//
//  sort__insertion.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef sort__insertion_h
#define sort__insertion_h

void insertionSort(int num[n]) {
    for (int i = 0; i <= n; i++) {
        int x = num[i];
        int j = i - 1;
        while (j >= 1 && num[j] > x) {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = x;
    }
}

#endif /* sort__insertion_h */
