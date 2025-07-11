#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee () {
    
    vector<ll> a(3);
    ll sum = 0;
    for (int i=0; i<3; i++) {
        cin>>a[i];
        sum += a[i];
    }
    
    sort(a.begin(), a.end());
        int small = a[0];
        int opr = 3;

        for (int i=1; i<3; i++) {
            while (a[i] > small && opr > 0) {
                a[i] -= small;
                opr--;
            }
            if (a[i] != small) {
                return false;
            }
        }
    

    return true;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        if (solvee())
            cout<<"YES"<<endl;

        else 
            cout<<"NO"<<endl;
    }
}