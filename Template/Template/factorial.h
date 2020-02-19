//
//  factorial.h
//  Template
//
//  Created by Mehedi Hasan on 19/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef factorial_h
#define factorial_h

int fact(int n) {
   if (n == 0 || n == 1) return 1;
   else return n * fact(n - 1);
}

#endif /* factorial_h */
