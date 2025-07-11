#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee() {
    ll x, y, a;

    if (a %(x+y) != 0) {
        
        if (x > a || x > y) return false;
        
        return true;
    }
    return false;
}

int main () {
    int t;   cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
