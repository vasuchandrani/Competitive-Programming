#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    int n, x;
    cin>>n>>x;

    vector<int> a(n);
    int first = 0;
    int last = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] == 1) last = i;
    }
    int i = 0;
    while (a[i] != 1) {
        i++;
    }
    first = i;

    return (last - first < x);
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}