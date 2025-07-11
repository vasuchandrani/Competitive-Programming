#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n); // Array for input values
    vector<ll> b(n);   
    ll maxi = -1;
    ll mini = INT_MAX;

    for (int i=0; i<n; i++) {
        cin>>a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }

    for (int i=0; i<n; i++) {
        cin>>b[i];
    }

    set<int> sumSet; 
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            sumSet.insert(a[i] + b[i]);
        }
    }

    if (sumSet.size() > 1) {
        return 0;
    } 
    else if (sumSet.size() == 1) {
        int sum = *sumSet.begin(); 

        if (maxi > sum || mini + k < sum) {
            return 0;
        } else {
            return 1;
        }
    } 
    
    return (mini + k) - maxi +1;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}