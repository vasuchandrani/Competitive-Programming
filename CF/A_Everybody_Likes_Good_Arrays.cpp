#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    int opr = 0;
    for (int i=0; i<n-1; i++) {
        if ((a[i]%2 == 0 && a[i+1]%2 == 0) || (a[i]%2 != 0 && a[i+1]%2 != 0)) {
            opr++;
        } 
    }

    return opr;
} 

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}