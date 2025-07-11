#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int 

int main() {
    lli t;
    cin>>t;
    while (t--) {
        lli n;
        cin>>n;

        lli temp = n & (n-1);
        if (temp==0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}