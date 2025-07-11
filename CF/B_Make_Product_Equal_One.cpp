#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    int n;  cin>>n;
    vector<ll> a(n);

    int neg = 0;
    int zero = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] < 0)   neg++;
        if (a[i] == 0)  zero++;
    }

    ll opr = zero;
    for (int i=0; i<n; i++) {
        if (a[i] < 0) {
            opr += abs((-1) -a[i]);
        }
        else if (a[i] > 1){
            opr += a[i] - 1;
        }
    }
    if (neg % 2 == 0) {
        return opr;
    } else if (zero > 0){
        return opr;
    } else {
        return opr+2;
    }
}

int main () {
    
    cout<<solvee()<<endl;
    return 0;
}