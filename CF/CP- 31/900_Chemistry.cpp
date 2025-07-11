#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

bool IsPalindrom(string s){
    int start = 0;
    int end = s.length();

    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        string s; cin>>s;

        if(k == n-1){
            cout<<"YES"<<endl;
            continue;
        }
        if(k >= n){
            cout<<"NO"<<endl;
            continue;
        }

        map<char, int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int cnt = 0;
        for(auto i : m){
            if(i.second%2 != 0){
                cnt++;
            }
        }
        if(k >= cnt-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}