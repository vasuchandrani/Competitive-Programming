#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {

    ll n;  cin>>n;
    string s;   cin>>s;

    if(n < 3) {
        return 0;
    }

    ll des = 0;
    ll underscore = 0;
    for (ll i=0; i<n; i++) {
        if (s[i] == '-') {
            des++;
        }
        if (s[i] == '_') {
            underscore++;
        }
    }

    if (des % 2 == 0) {
        return underscore * (des/2) * (des/2);
    }

    return underscore * (des/2) * (des/2+1);
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}