#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    ll k, a, b, x, y;
    cin>>k>>a>>b>>x>>y;

    ll cnt1 = 0, cnt2 = 0;
    ll temp_k = k;

    // a
    k = temp_k;
    if (k >= b) {
        ll count_b = (k - b) / y + 1;
        cnt2 += count_b;
        k -= count_b * y;
    }
    if (k >= a) {
        ll count_a = (k - a) / x + 1;
        cnt2 += count_a;
    }

    return max(cnt1, cnt2);
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}