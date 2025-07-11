#include<bits/stdc++.h>
using namespace std;

void solvee() {

    int n;  cin>>n;

    vector<int> v(n);
    
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }

    int maxi = v[n-1] - v[0];

    // fix first idx 
    for (int i=1; i<n; i++) {
        maxi = max(maxi, v[i] - v[0]);
    } 

    // fix last idx 
    for (int i=0; i<n; i++) {
        maxi = max(maxi, v[n-1] - v[i]);
    }

    // pick entire arry as sub-segment
    for (int i=0; i<n-1; i++) {
        maxi = max(maxi, v[i] - v[i+1]);
    }

    cout<<maxi<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        
        solvee();
    }

    return 0;
}