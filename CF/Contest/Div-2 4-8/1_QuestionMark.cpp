#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        string s;
        cin>>n;
        cin>>s;

        map<char, int> m;
        int size = s.length();
        for(int i=0;i<size;i++) {
            if(s[i] != '?')
                m[s[i]]++;
        }

        int marks = 0;
        for(auto i : m) {
            marks += min(i.second, n);
        }
        cout<<marks<<endl;
    }
    return 0;
}