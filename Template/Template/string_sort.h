//
//  string_sort.h
//  Template
//
//  Created by Mehedi Hasan on 18/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef string_sort_h
#define string_sort_h

#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void stringSort(int s[10000]) {
    int n, i;
    
    vector<string> V;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> s;
        V.push_back(s);
    }
    
    sort(V.begin(), V.end());
}


#endif /* string_sort_h */
