//
//  ab_mod_p.h
//  Template
//
//  Created by Mehedi Hasan on 20/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef ab_mod_p_h
#define ab_mod_p_h

long powmod(long base, long exp, long modulus) {
    base %= modulus;
    long result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
  return result;
}

#endif /* ab_mod_p_h */
