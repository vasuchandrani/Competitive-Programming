#include<bits/stdc++.h>
using namespace std;

int reverse (string s, int n) {

    int opr = 0;
    bool one = false;
    bool zero = true;

    for (int i=0; i<n; i++) {
        if (s[i] == '0') {
            if (zero)   opr++;
            else {
                opr += 2;
                zero = true;
            }
        }
        else {
            if (one)   opr++;
            else {
                opr += 2;
                one = true;
            }
        }
    }

    return opr;
}

int main () {
    int t;  cin>>t;
    
    while (t--) {
        int n;  cin>>n;
        string s;   cin>>s;


        cout<<reverse(s, n)<<endl;
    }

    return 0;
}