#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n, m;
    cin>>n>>m;

    vector<ll> a(n);
    vector<ll> b(n);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<m; i++) cin>>b[i];

    vector<ll> rem;
    sort(b.begin(), b.end(), greater<int>());
    sort(a.begin(), a.end(), greater<int>());

    int i = 0;
    int j = 0;
    int f = 0;
    while (i < n) {
        if (a[i] >= b[j]) {
            j++;
            f++;
        }
        i++;
    }
    
    
}
int main () {
    int t;
    cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}