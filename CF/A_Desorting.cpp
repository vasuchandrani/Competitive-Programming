#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solvee () {
    int n;  cin>>n;
    vector<ll> a(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll opr = INT_MAX;
    for (int i=1; i<n; i++) {
        if (a[i] < a[i-1]) {
            return 0;
        }

        opr = min(opr, (a[i]-a[i-1])/2 +1);
    }

    return opr;
}

int main () {
    int t;  cin>>t;

    while (t--) {
        cout<<solvee()<<endl;
    }
}