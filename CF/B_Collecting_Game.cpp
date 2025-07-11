#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {

    int n;  cin>>n;
    
    vector<pair<ll, int>> v(n);
    for (int i=0; i<n; i++) {
        ll ele; cin>>ele;
        v[i] = {ele, i};
    }
    sort(v.begin(), v.end());

    // consicutive sum
    vector<ll> sum(n);
    sum[0] = v[0].first; 
    for (int i=1; i<n; i++) {
        sum[i] = sum[i-1] + v[i].first;
    }

    vector<int> result(n);
    vector<int> dp(n);
    dp[n-1] = n-1;
    result[v[n-1].second] = dp[n-1];

    for (int i=n-2; i>=0; i--) {

        dp[i] = sum[i] < v[i+1].first ? i : dp[i+1];

        result[v[i].second] = dp[i];
    }

    for (int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}