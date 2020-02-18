//
//  big_mod.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef big_mod_h
#define big_mod_h

int bigMod(int a, int b, int M) {
    if (b == 0) return 1 % M;
    int x = bigMod(a, b / 2, M);
    x = (x * x) % M;
    if (b % 2 == 1) x = (x * a) % M;
    return x;
}

#endif /* big_mod_h */
