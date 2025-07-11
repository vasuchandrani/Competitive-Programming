#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--) {
        string s;
        string t;
        cin>>s>>t;

        int j = 0;
        for(int i=0;i<s.length();i++) {
            if(j < t.length() && (s[i] == t[j] || s[i] == '?')) {
                if(s[i] == '?') {
                    s[i] = t[j];
                }
                j++;
            }
        }

        if(j == t.length()) {
            cout<<"YES"<<endl;
            for(int i=0;i<s.size();i++) {
                if(s[i] == '?') {
                    s[i] = 'm'; 
                }
            }
            cout<<s<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}