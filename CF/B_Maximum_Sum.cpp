#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n, k;
    cin>>n>>k;

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());

    ll sum = 0;
    vector<ll> pref(n+1);
    for (int i=0; i<n; i++) {
        sum += a[i];
        pref[i +1] = sum;
    }

    ll ans = 0;

    for (int i=0; i<=k; i++) {
        ans = max(ans, (pref[n-i] -pref[2*(k- i)]));
    }
    /*
        0 - k
        1 - k-1
        : - :
        i - k-i
    */
    cout<<ans<<endl;
}

int main () {
    int t;  cin>>t;
    while(t--) {
        solve();
    }
}