#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define in(n) int n; cin>>n;
#define say_no cout<<"NO"<<endl;
#define say_yes cout<<"YES"<<endl;

void solve() {

    in(n);
    vector<ll> v(n);

    ll oddSum = 0;
    ll evenSum = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if (i % 2 == 0) {
            evenSum += v[i];
        }
        else {
            oddSum += v[i];
        }
    }

    ll oddPlace = n/2;
    ll evenPlace = (n+1)/2;

    if (oddSum % oddPlace == 0 && evenSum % evenPlace == 0 && oddSum/oddPlace == evenSum/evenPlace){
        say_yes;
    }
    else {
        say_no
    }
}

int main () {
    
    in(t);
    while(t--) {
        solve();
    }
}