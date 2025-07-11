#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;
    string s; cin>>s;   

    int open = 0;
    int opr = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == ')') {
            open--;
            if (open < 0) {
                opr++;
                open++;
            }
        } else {
            open++;
        }
    }
    return opr;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}