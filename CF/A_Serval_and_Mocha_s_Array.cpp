#include<bits/stdc++.h>
using namespace std;

bool solvee () {
    int n;  cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (__gcd(a[i], a[j]) <= 2) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int t;  cin>>t;

    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}