//
//  prime_factor.h
//  Template
//
//  Created by Mehedi Hasan on 20/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef prime_factor_h
#define prime_factor_h

// smallest prime factor of a number.
void factor(int n) {
    int a;
    if (n % 2 == 0) return 2;
    for (a = 3; a <= sqrt(n); a++++)
        if (n%a==0) return a;
    return n;
// complete factorization
    int r;
    while (n > 1) {
        r = factor(n);
        printf("%d", r); n /= r;
    }
}
#endif /* prime_factor_h */
