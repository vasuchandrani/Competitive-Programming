#include<bits/stdc++.h>
using namespace std;

int solvee (int n, int m, int k, int key, vector<int> &q) {

    int l = 0;
    int r = k-1;
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (key == q[mid]) 
            return 0;

        else if (key > q[mid])
            l = mid+1;

        else 
            r = mid-1;
    }
    return 1;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> a(m);
        vector<int> q(k);

        for (int i=0; i<m; i++) {
            cin>>a[i];
        }
        for (int i=0; i<k; i++) {
            cin>>q[i];
        }

        if (k < n-1) {
            for (int i=0; i<m; i++) {
                cout<<0;
            }cout<<endl;
        }
        else if (k > n-1) {
            for (int i=0; i<m; i++) {
                cout<<1;
            }cout<<endl;
        }
        else {
            for (int i=0; i<m; i++) {
                cout<<solvee(n,m,k,a[i],q);
            }cout<<endl;
        }
    }
}