#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

bool solvee() {
    int n, j, k;
    cin>>n>>j>>k;

    vector<int> a(n);
    int maxi = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        maxi = max(maxi, a[i]);
    }

    if (k == 1 && maxi != a[j-1])
        return false;

    return true;
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
}