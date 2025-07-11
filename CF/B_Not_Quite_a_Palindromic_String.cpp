#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    
    int n, k;   cin>>n>>k;
    string s;   cin>>s;

    int z = 0, o = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '0') z++;
        else o++;
    }

    int p = n/2;    // pair
    int ngp = abs(k - p);    // not good pair

    if (ngp <= z && ngp <= o) {
        z -= ngp;
        o -= ngp;
        if (o %2 ==0 && z %2 == 0) 
            return true;
        else 
            return false;
    }
    return false;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }

    return 0;
}