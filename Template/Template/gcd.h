//
//  gcd.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef gcd_h
#define gcd_h

int gcd(int n, int m) {
    if (n % m == 0) return m;
    return gcd(m, n % m);
}

#endif /* gcd_h */
