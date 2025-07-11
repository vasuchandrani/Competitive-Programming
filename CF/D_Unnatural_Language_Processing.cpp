#include<bits/stdc++.h>
using namespace std;

void solvee() {

    int n;  cin>>n;
    string s;   cin>>s;

    for (int i=n-1; i>=0; i--) {
        
        if (s[i] == 'a' || s[i] == 'e') {
            // CV
            if (i -1 > 0) {
                s.insert(i-1, 1, '.');
                i = i-1;
            }
        } else {
            // CVC
            if (i -2 > 0) {
                s.insert(i-2, 1, '.');
                i = i-2;
            }
        }
    }

    cout<<s<<endl;
}

int main() {

    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}