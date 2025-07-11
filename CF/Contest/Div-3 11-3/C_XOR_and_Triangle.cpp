#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {

    ll x;
    cin>>x;

    ll l = 1;
    ll r = x;
    while (l <= r) {

        ll y = l + (r - l)/2;
        ll z = x ^ y;
            
        if (x + y <= z || x + z <= y) {
            r = y - 1;
        }
        else if (y + z <= x) {
            l = y + 1; 
        }
        else {
            return y;
        }
    }
    return -1;
}

int main() {
    int t;  cin>>t;
    
    while (t--) {
        cout<<solvee()<<endl;
    }
}