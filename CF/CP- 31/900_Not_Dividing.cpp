#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {
    int n;  cin>>n;
    vector<ll> a(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] == 1) 
            a[i] += 1;
    }

    for (int i=1; i<n; i++) {
        if (a[i] % a[i-1] == 0) 
            a[i]++;
    }

    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solvee();
    }
    return 0;
}