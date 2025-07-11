#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int n;  cin>>n;
    vector<int> a(n);

    map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        
        mp[a[i]] = i+1;
    }

    int maxSum = -1;
    for (auto i=mp.begin(); i!=mp.end(); i++) {
        for (auto j=mp.begin(); j!=mp.end(); j++) {
            if (__gcd(i->first, j->first) == 1) {
                maxSum = max(maxSum, i->second+j->second);
            }   
        }
    }
    return maxSum;
}

int main () {
    int t;
    cin>>t;

    while (t--) {
        cout<<solvee()<<endl;
    }
}