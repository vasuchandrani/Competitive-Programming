#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool cmp (pair<ll, int> &a, pair<ll, int> &b) {

    if (a.first == b.first) {
        return a.second < b.second;
    }

    return a.first > b.first;
}

void solvee () {
    int n; 
    ll k;
    cin>>n>>k;
    
    vector<pair<ll, int>> v(n);
    for (int i=0; i<n; i++) {

        cin>>v[i].first;
        v[i].first = v[i].first % k;

        if (v[i].first == 0) {
            v[i].first = k;
        }

        v[i].second = i + 1;
    }
    
    sort(v.begin(), v.end(), cmp);

    for (auto it : v) {
        cout<<it.second<<" ";
    }
    cout<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}