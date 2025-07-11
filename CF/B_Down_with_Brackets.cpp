#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    string s;   cin>>s;
    int n = s.length();

    int open = 0;
    for (int i=0; i<n; i++) {

        if (s[i] == '(') open++;
        else open--;
        
        if (open == 0 && i != n-1) {
            return true;
        }
    }
    return false;
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