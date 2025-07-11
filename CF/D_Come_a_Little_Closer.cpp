#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solvee() {
    int n;  cin>>n;
    vector<ll> x(n);
    vector<ll> y(n);

    for (int i=0; i<n; i++) {
        ll a, b;    cin>>a>>b;
        x[i] = a;
        y[i] = b;
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    return (min((x[n-2]-x[0] +1) *(y[n-1]-y[0] +1),(x[n-1]-x[0] +1) *(y[n-2]-y[0] +1)));
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}