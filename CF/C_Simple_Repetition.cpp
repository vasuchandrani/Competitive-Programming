#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee(ll x) {
    
    if (x < 2) return false;


    for (int i=2; i*i<=x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main () {
    int t;  cin>>t;

    while (t--) {
        ll x;
        int k;
        cin>>x>>k;

        if ((x == 1 && k == 2)||(solvee(x) && k == 1)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}