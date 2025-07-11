#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solvee() {
    int n, m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(m);
    
    ll sum1 = 0;
    ll sum2 = 0;

    for (int i=0; i<n; i++) {
        cin>>a[i];
        sum1 += a[i];
    }
    for (int i=0; i<m; i++) {
        cin>>b[i];
        sum2 += b[i];
    }

    if (sum1 == sum2) {
        cout<<"Draw"<<endl;
    }
    else if (sum1 > sum2) {
        cout<<"Tsondu"<<endl;
    }
    else {
        cout<<"Tenzing"<<endl;
    }
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}