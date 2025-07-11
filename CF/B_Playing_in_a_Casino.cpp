#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n, m;   cin>>n>>m;
    int a[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    ll total = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=0; k<m; k++) {
                int temp = abs(a[i][k] - a[j][k]);
                total += temp;
            }
        }
    }
    cout<<total<<endl;
    return;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}