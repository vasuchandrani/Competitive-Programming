#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    if (n == 1) {
        cout<<1<<endl;
        return;
    }

    int state = 0;
    int b = 1;
    for (int i=1; i<n; i++) {
        
        if (a[i-1] < a[i] && state != 1) {
            b++;
            state = 1;
        }
        if (a[i-1] > a[i] && state != -1) {
            b++;
            state = -1;
        }
    }
    cout<<b<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}