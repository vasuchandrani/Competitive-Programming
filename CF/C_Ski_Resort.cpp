#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    ll n, k, q;
    cin>>n>>k>>q;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) cin>>a[i];

    ll cnt = 0;
    vector<ll> b;
    for (ll i=0; i<n; i++) {
        if (a[i] <= q) {
            cnt++;
        }
        else {
            if (cnt >= k) {
                b.push_back(cnt);
            }
            cnt = 0;
        }
    }
    if (cnt != 0 && cnt >= k) b.push_back(cnt);

    ll ans = 0;
    for (ll it : b) {
        ans += (((it - k + 1) * ((it - k + 1) + 1)) / 2);
    }

    return ans;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}