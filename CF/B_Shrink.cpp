#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;
    cin>>n;

    vector<int> a(n);

    if (n % 2 != 0) {
        int j = 1;
        for (int i=0; i<=n/2; i++) {
            a[i] = j;
            j += 2;
        }
        j = 2;
        for (int i=n-1; i>n/2; i--) {
            a[i] = j;
            j += 2; 
        }
    }
    else {
        int j = 1;
        for (int i=0; i<n/2; i++) {
            a[i] = j;
            j += 2;
        }
        j = 2;
        for (int i=n-1; i>=n/2; i--) {
            a[i] = j;
            j += 2; 
        }
    }

    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main () {

    int t;  cin>>t;
    while (t--) {
        solvee();
    }
    return 0;
}