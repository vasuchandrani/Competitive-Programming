#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        lli a, b;
        int n;
        cin>>a>>b>>n;
        lli x;
        lli second = b;
        for (int i=0;i<n;i++) {
            cin>>x;
            second += min(x, a-1);
        }
        cout<<second<<endl;
    }
    return 0;
}