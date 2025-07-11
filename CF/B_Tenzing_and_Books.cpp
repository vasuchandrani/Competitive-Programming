#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee() {

    ll n, x;
    cin>>n>>x;

    vector<vector<int>> a(3, vector<int>(n, 0));

    for (int i=0; i<3; i++) {
        for (int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }

    int ans = 0;

    for (int i=0; i<3; i++) {
        for (int j=0; j<n; j++) {
            
            if ((a[i][j] & (~x)) == 0) {
                ans |= a[i][j];
            }
            else {
                break;
            }
        }
    }

    return (ans == x); 
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}