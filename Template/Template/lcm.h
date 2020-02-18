//
//  lcm.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef lcm_h
#define lcm_h
#include "gcd.h"

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

#endif /* lcm_h */
