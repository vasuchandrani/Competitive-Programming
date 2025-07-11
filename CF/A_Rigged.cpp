#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    ll n;   cin>>n;

    vector<pair<ll, ll>> v(n);
    bool flag = false;
    ll s, e;
    for (int i=0; i<n; i++) {
        ll si, ei;
        cin>>si>>ei;
        if (i == 0) {
            s = si;
            e = ei;
        }
        if (i > 0 && si >= s) flag = true; 
        v[i] = {si, ei};
    }

    if (flag) {
        for (int i=1; i<n; i++) {
            if (e <= v[i].second && s <= v[i].first) {
                return -1;
            }
        }
        return s;
    } else {
        return s;
    }
}

int main () {
    int t;  cin>>t;

    while (t--) {
        cout<<solvee()<<endl;
    }

}