#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int n = s.length();
        
        if (n == 1) cout<<s<<endl;
        else if(s[0] == s[n-1]) cout<<s<<endl;
        else cout<<s.substr(0,n-1)<<s[0]<<endl;
    }
    return 0;
}