#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    int n, k;
    cin>>n>>k;

    vector<ll> a(n*k);
    for (int i=0; i<n*k; i++) {
        cin>>a[i];
    }

    int idx = (n%2 == 0) ? n/2 -1 : n/2;

    int i = 0;
    int j = k-1;

    ll sum = 0;

    


}

int main () {
    int t;  cin>>t;

    while(t--) {
        solvee();
    }
}