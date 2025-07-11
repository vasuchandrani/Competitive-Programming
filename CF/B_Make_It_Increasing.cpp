#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    int opr = 0;
    for (int i=n-1; i>0; i--) {

        if (a[i] == 0 && i != 0) {
            return -1;
        }

        while (a[i-1] > 0 && a[i] <= a[i-1]) {
            a[i-1] = a[i-1]/2;
            opr++;
        }
    }

    return opr;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}



