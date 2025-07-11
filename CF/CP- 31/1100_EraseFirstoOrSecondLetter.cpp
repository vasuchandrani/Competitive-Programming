#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        lli strings = 0;

        set<char> stt;
        for(int i=0;i<n;i++) {
            stt.insert(s[i]);
            strings += stt.size();
        }
        cout<<strings<<endl;
    }
}