#include<bits/stdc++.h>
using namespace std;

int solve() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);

    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];

    
    int expA = 0;
    int maxi = 0;
    int result = 0;    

    for (int i=1; i<=n; i++) {
        expA += a[i-1];
        
        int rem = k - i;
        if (rem < 0) break;

        maxi = max(maxi, b[i-1]);
        int exp = expA + rem*maxi;

        result = max(result, exp);

    }

    return result;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solve() <<endl;
    }
}