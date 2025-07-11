#include<bits/stdc++.h>
using namespace std;

void solve () {

    int n;  cin>>n;
    vector<int> a(n);
    int two = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] == 2)
            two++;
    }
    if (two % 2 != 0) {
        cout<<-1<<endl;
        return;
    }

    vector<int> left(n, 0);
    vector<int> right(n, 0);

    left[0] = a[0] == 2 ? 1 : 0;
    for (int i=1; i<n; i++) {
        left[i] = left[i-1] + (a[i] == 2 ? 1 : 0);
    }

    for (int i=n-2; i>=0; i--) {
        right[i] = right[i+1] + (a[i+1] == 2 ? 1 : 0); 
    }

    for (int i=0; i<n; i++) {
        if (left[i] == right[i]) {
            cout<<i+1<<endl;
            return;
        }
    }
}

int main () {
    int t;  cin>>t;

    while (t--) {
        solve();
    }
}