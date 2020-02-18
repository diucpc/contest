//
//  main.cpp
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#include <iostream>
#include "leap_year.h"
#include "fibonacci.h"
#include "prime.h"
#include "lcm.h"

using namespace std;

int main(int argc, const char * argv[]) {
//    Leap Year
    cout << isLeapYear(2020) << endl;
    
//    Fibonacci
    cout << fibonacci(4) << endl;
    
//    Prime
    cout << isPrime(19) << endl;
    
//    gcd and lcm
    cout << lcm(3, 6) << endl;
    
    return 0;
}
