#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int remv = 0;
    for (int i=0; i<n; i++) {
        if (i > 0) {
            int gcd = __gcd(a[i], a[i-1]);
            if (gcd != 1) {
                if (a[i] - a[i-1] %2 == 0) {
                    remv++;
                } 
            }
        }
    }
    return remv;
}

int main () {
    int t; cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}