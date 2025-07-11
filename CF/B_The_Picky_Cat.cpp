#include<bits/stdc++.h>
using namespace std;

bool solvee () {
    int n;  cin>>n;
    vector<int> a(n);
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
        a[i] = abs(a[i]);
    }
    int cnt = 0;
    
    for (int i=1; i<n; i++) {
        cnt += (a[i] >= a[0]);
    }
    
    if (n%2 == 0) {
        n = n/2;
    }
    else {
        n = n/2 +1;
    }

    return (cnt >= (n-1));
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}