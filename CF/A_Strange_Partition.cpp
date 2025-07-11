#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {
    int n;  cin>>n;
    ll x;   cin>>x;
    vector<ll> a(n);
    ll sum = 0;
    ll maxi = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
        maxi += (a[i] %x == 0) ? a[i]/x : a[i]/x + 1;
    }

    ll mini = (sum %x == 0) ? sum/x : sum/x + 1;

    cout<<mini<<" "<<maxi<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}