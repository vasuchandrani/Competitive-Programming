#include<bits/stdc++.h>
using namespace std;

void solvee() {

    string s;
    cin>>s;

    int n = s.length();
    int cnt1 = 0;

    for (int i=0; i<n; i++) {
        if (s[i] == '1') {
            cnt1++;
        }
    }

    int cnt0 = n - cnt1;

    if (min(cnt0, cnt1) % 2 == 0) {
        cout<<"NET"<<endl;
    }
    else {
        cout<<"DA"<<endl;
    }
}


int main() {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}