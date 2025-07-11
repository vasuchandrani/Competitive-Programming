#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    int n, q;
    cin>>n>>q;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    
    vector<int> x(q);
    for (int i=0; i<q; i++) cin>>x[i];

    int maxVal = 31;

    for (int i=0; i<q; i++) {
        if (x[i] >= maxVal) continue;

        int val = pow(2, x[i]);
        for (int j=0; j<n; j++) {

            if (a[j] % val == 0) {
                a[j] += val/2;
            }
        }

        maxVal = x[i];
    }

    for (int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
    return 0;
}