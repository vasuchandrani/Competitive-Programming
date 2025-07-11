#include<bits/stdc++.h>
using namespace std;

void solvee () {
    int n;   cin>>n;
    vector<vector <int>> v(n, vector<int>(n));

    vector<int> ans(2*n + 2);
    vector<bool> elements(2*n + 1, true);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>v[i][j];
            if (elements[v[i][j]]) {
                elements[v[i][j]] = false;
                ans[i+j+2] = v[i][j];
            }
        }
    }

    for (int i=1; i<=2*n; i++) {
        if (elements[i]) {
            ans[1] = i;
        }
    }

    for (int i=1; i<=2*n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}