#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    int n, x;
    cin>>n>>x;

    if (x == n) {
        for (int i=0; i<n; i++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else {
        for (int i=0; i<n; i++) {
            if (i == x) continue;
            cout<<i<<" ";
        }
        cout<<x<<endl;
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solvee();
    }
}