#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {

    ll n;  cin>>n;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) {
        cin>>a[i];  
    }

    vector<ll> maxi(n);
    ll maxEle = 0;
    for (ll j=0; j<n; j++) {
        maxEle = max(maxEle, a[j]);
        maxi[j] = maxEle;
    }

    vector<ll> tillsum(n);
    ll sum = 0;
    for (ll j=n-1; j>=0; j--) {
        sum += a[j];
        tillsum[j] = sum;
    }
    
    vector<ll> leftMax(n);
    for (ll i=n-1; i>=0; i--) {
        
        ll sum = tillsum[i];

        ll maxEle = maxi[i];

        sum = max(sum, sum -a[i] +maxEle);
        leftMax[n-1 -i] = sum;
    }

    for (ll i=0; i<n; i++) {
        cout<<leftMax[i]<<" ";
    }cout<<endl;
    
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}