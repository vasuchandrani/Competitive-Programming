#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    
    int cnt = 1;
    for (int i=1; i<n; i++) {
        if (a[i-1] + 1 == a[i] || a[i-1] == a[i]) {
            a[i] = a[i-1];
        }
        else {
            cnt++;
        }
    }
    return cnt;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}