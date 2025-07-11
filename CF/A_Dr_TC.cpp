#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee () {
    int n;  cin>>n;
    string s;   cin>>s;

    int cnt = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '1') cnt++;
    }

    int ans = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '1') {
            ans += (cnt -1);
        }
        else {
            ans += cnt + 1;
        }
    }

    return ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}