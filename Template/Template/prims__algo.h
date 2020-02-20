//
//  prims__algo.h
//  Template
//
//  Created by Mehedi Hasan on 20/2/20.
//  Copyright © 2020 Mehedi Hasan. All rights reserved.
//

#ifndef prims__algo_h
#define prims__algo_h

int d[1001] = {0};
bool v[1001] = {0};
int a[1001][1001] = {0};

int main(void) {
    int n=0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = 0, y = 0, z = 0;
        cin >> x >> y >> z;
        a[x][y] = z;
    }
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 0)
                a[i][j] = INT_MAX;
    cout << prim(1, n) << endl;
}

int prim(int u, int n) {
    int mst = 0, k;
    
    for (int i = 0; i < d.length; i++)
        d[i] = INT_MAX;
    
    for (int i = 0; i < v.length; i++)
        v[i] = false;
    d[u] = 0;

    int i = u;
    while (i != 0) {
        v[i] = true;
        k = 0;
        mst += d[i];
        
        for (int j = 1; j <= n; j++)
            if (!v[j]) {
                if (a[i][j] < d[j])
                    d[j] = a[i][j];
                if (d[j] < d[k])
                    k = j;
            }
        i = k;
    }
    return mst;
}

#endif /* prims__algo_h */
