#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee () {
    int n;  cin>>n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        sum += a[i];
    }

    ll root = sqrt(sum);

    return (root * root == sum);
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