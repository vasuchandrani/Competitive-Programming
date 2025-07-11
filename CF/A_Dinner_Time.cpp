#include<bits/stdc++.h>
using namespace std;

bool solvee() {

    int n, m, p, q;
    cin>>n>>m>>p>>q;
    
    if (n % p == 0) {
        if (q * n/p == m) {
            return true;
        }
        else {
            return false;
        }
    }
    return true;
}

int main () {
    int t;  cin>>t;

    while (t--) {
        if (solvee()) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}