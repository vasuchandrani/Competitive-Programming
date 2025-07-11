#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> a(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int i = -1;
    int j = 0;
    ll cnt = 0;
    while (j < n) {

        if (a[j] * (j-i) >= x) {
            cnt++;
            i = j;
        }
        j++;
    }

    return cnt;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }

    return 0;
}