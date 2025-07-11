#include<bits/stdc++.h>
using namespace std;

void solve () {

    int n;  cin>>n;
    vector<int> a(n);

    for (int i=0; i<n; i++) {
        cin>> a[i];
    }

    int min_val = a[0];
    int sum = a[0]; 
    for (int i=1; i<n; i++) {
        sum += a[i];
        int avg = sum / (i + 1);
        min_val = min(min_val, avg);
    }

    int max_val = a[n-1];
    sum = a[n-1];
    for (int i=n-2; i>=0; i--) {
        sum += a[i];
        int avg = (sum +n -i -1) / (n-i);
        max_val = max(max_val, avg);
    }

    cout<< max_val - min_val << endl;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}