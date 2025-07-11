#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    int n;  cin>>n;

    vector<int> m(n);
    ll sum = 0;
    ll mini1 = INT_MAX;
    ll mini2 = INT_MAX;
    for (int i=0; i<n; i++) {
        cin>>m[i];
        vector<ll> a(m[i]);
        for (int j=0; j<m[i]; j++) {
            cin>>a[j];
        }

        sort(a.begin(), a.end());
        sum += a[1];
        mini1 = min(mini1, a[0]);
        mini2 = min(mini2, a[1]);
    }

    return sum - (mini2 - mini1);
}

int main () {
    int t;  cin>>t;

    while (t--) {
        cout<<solvee() <<endl;
    }
}