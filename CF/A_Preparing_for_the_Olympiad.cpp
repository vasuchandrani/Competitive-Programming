#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;     cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }

    int x = 0;
    int y;
    int diff = 0;
    while (x < n) {
        y = x +1;
        if (y < n && a[x] > b[y]) {
            diff += a[x] - b[y];
        }
        if (x == n-1) {
            diff += a[x];
        }
        x++;
    }
    cout<<diff<<endl;
}

int main() {
   int t;  cin>>t;
   while (t--) {
       solve();
   }
}
