#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;  cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    for (int i=0; i<n-1; i++) {

        if (abs(a[i] - a[i+1]) != 5 && abs(a[i] - a[i+1]) != 7) {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    int t;  cin>>t;

    while (t--) {
        solvee();
    }
}