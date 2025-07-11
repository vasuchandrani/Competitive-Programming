#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    string s; cin>>s;
    
    ll cnt = 0;
    ll idx = -1;
    for (ll i=s.length()-1; i>=0; i--) {
        if (s[i] == '0') {
            cnt++;
        }
        else {
            idx = i;
            break;
        }
    }

    for (ll i=0; i<idx; i++) {
        if (s[i] != '0') {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int t; cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}