#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin>>n>>p;

    vector<int> a(n);
    vector<int> b(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }

    vector<pair<int, int>> v;
    for (int i=0; i<n; i++) {
        if (b[i] < p)
            v.push_back({b[i], a[i]});
    }

    sort(v.begin(), v.end());

    long long cost = 0;
    cost += (long long)p;
    n -= 1;

    int i = 0;
    while (n > 0 && !v.empty()) {
        
        if (v[i].first < p && i < v.size()) {
            
            int x = min(n, v[i].second);            
            n -= x;
            cost += (long long)v[i].first * x;
            i++;
        }
        else {
            cost += (long long)p * n;
            n = 0;
        }
    }

    if (n > 0) {
        cost += (long long)n * p;
    }

    cout<<cost<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solve();
    }
}