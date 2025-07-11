#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);

    ll mina, minb;
    mina = minb = INT_MAX;
    ll suma = 0;
    ll sumb = 0;
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
        mina = min(mina, a[i]);
        suma += a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
        minb = min(minb, b[i]);
        sumb += b[i];
    }

    for (int i=0; i<n; i++) {
        suma += minb;
        sumb += mina;
    }

    return min(suma, sumb);
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}