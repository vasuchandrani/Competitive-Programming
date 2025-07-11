#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solvee() {
    ll n;
    cin>>n;

    ll x;
    int k = 2;
    ll term = -1;
    while (term < n) {

        term = pow(2,k) - 1;

        if (n % term == 0) {
            x = n / term;
            break;
        }
        k++;
    }

    return x;
}

int main () {
    int t;  cin>>t;
    while(t--) {
        cout<<solvee()<<endl;
    }
}