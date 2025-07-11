#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    ll result = a[0];
    for (int i=1; i<n; i++) {
        result = result & a[i];
    }

    return result;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}