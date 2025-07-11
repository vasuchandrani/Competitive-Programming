#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee () {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    int cnt = 1;
    int conti = 0;
    for (int i=1; i<n; i++) {
        if (a[i-1] == a[i]) cnt++;
        else cnt = 1;

        if (cnt == 4) return true;

        if (a[i] - a[i-1] == 1) {
            conti++;
        }
        else {
            conti = 0;
        }

        if (conti == 2) return true;
    }

    return false;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
