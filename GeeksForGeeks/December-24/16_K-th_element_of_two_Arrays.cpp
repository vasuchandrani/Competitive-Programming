#include<bits/stdc++.h>
using namespace std;

int kthElement(int *a, int n, int *b, int m, int k) {

    int i = 0;
    int j = 0;

    int cnt = 0;
    char arry = i;
    int ans[n+m];
    while (i <= n && j <= m) {

        if (a[i] < b[j]) {
            i++;
            ans[cnt] = a[i];
            cnt++;
        }
        else {
            j++;
            ans[cnt] = b[j];
            cnt++;
        }
        if (cnt == k-1) {
            return ans[cnt];
        }
    }

    if (cnt < k) {
        while (i <= n) {
            i++;
            ans[cnt] = a[i];
            cnt++;
            if (cnt == k) {
                return ans[cnt];
            }
        }

        while (j <= m) {
            j++;
            ans[cnt] = b[j];
            cnt++;
            if (cnt == k) {
                return ans[cnt];
            }
        }
    }
    return 0;
}

