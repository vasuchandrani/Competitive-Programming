#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    ll n, k, b, s;
    cin>>n>>k>>b>>s;

    if (s < k*b || s > (k*b + n*(k-1))) {
        cout<<-1<<endl;
        return;
    }
    ll a[n];

    a[0] = k*b;
    s -= k*b;

    if(s > 0){
        a[0] += min(k-1, s);
        s -= min(k-1, s);
    }

    for (ll i=1; i<n; i++) {
        if (s > 0) {
            a[i] = min(s, k-1);
            s -= a[i];
        }
        else {
            a[i] = 0;
        }
    }

    for (ll i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }cout<<endl;

}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}