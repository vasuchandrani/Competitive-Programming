#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee () {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    unordered_map<ll, int> mp;
    for (int i=0; i<n; i++) mp[a[i]]++;

    int maxFreq = 0;
    for (auto it : mp) {
        maxFreq = max(maxFreq, it.second);
    }

    int opr = 0;

    while (maxFreq < n) {
        // make copy
        opr++;

        // swap maxFreq ele in one arry 
        opr += min(maxFreq, n - maxFreq);

        // the maxFreq becomes double
        maxFreq = 2 * maxFreq;
    }

    return opr;
}


int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}