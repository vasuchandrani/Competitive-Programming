#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

bool tHree (string s, int n, int &dots) {

    int cnt = 0;
    for(int i=0;i<n;i++) {
        if (s[i] == '.') {
            cnt++;
            dots++;
        } 
        else cnt = 0;
        if (cnt == 3) return true;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int dots = 0;
        
        if(tHree(s,n,dots)) {
            cout<<2<<endl;
        }
        else {
            cout<<dots<<endl;
        }        
    }
    return 0;
}