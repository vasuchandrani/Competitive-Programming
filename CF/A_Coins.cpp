#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ll n, k;
    cin>>n>>k;

    if (n%2 == 0) {
        cout<<"yes"<<endl;
    } else {
        if (k%2 == 0) {
            cout<<"no"<<endl;
        } else {
            cout<<"yes"<<endl;
        }
    }
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solve();
    }
}