//
//  Header.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef Header_h
#define Header_h

bool isLeapYear(int year) {
    return ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) ? true : false;
}

#endif /* Header_h */
