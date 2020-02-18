//
//  sort__bubble.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef sort__bubble_h
#define sort__bubble_h

void bubbleSort(int num[n]) {
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j < n; j++) {
            if (num[j + 1] > num[j]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

#endif /* sort__bubble_h */
