//
//  modular_inverse.h
//  Template
//
//  Created by Mehedi Hasan on 19/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef modular_inverse_h
#define modular_inverse_h

int modInverse(int a, int m) {
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1) return x;
}

#endif /* modular_inverse_h */
