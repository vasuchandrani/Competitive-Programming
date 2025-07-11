#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin>>n>>k;

    if (k == 1) {
        for (int i=1; i<=n; i++) {
            cout<<i<<" ";
        }cout<<endl;
    }
    else {
        int i = 1;
        int j = n;
        vector<int> ans;
        while (i < j) {
            int larger = k-1;
            while (larger--) {
                ans.push_back(j);
                j--;
            }
            ans.push_back(i);
            i++;
        }

        if (ans.size() != n) {
            ans.push_back(j);
        }

        for (int i=0; i<n; i++) {
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}

int main() {
    int t;  cin>>t;
    while (t--) {
        solve();
    }
}