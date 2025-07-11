#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int

int main() {
    int t;
    cin>>t;
    while(t--) {
        lli n;
        cin>>n;
        int cnt = 0;
        for(lli i=1;i<=n;i++) {
            if(n%i != 0) {
                break;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}