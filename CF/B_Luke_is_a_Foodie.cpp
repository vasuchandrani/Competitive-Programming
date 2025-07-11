#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    ll x;   cin>>x;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    int cnt = 0;
    vector<ll> prev = {a[0]-x, a[0]+x};
    for (int i=1; i<n; i++) {
        vector<ll> curr = {a[i]-x, a[i]+x};

        vector<ll> overlap = {max(prev[0], curr[0]), min(prev[1], curr[1])};

        if (overlap[0] > overlap[1]) {
            cnt++;
            prev = curr;
        }
        else {
            prev = overlap;
        }
    }

    return cnt;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}