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

        int cnt2 = 0;
        int cnt3 = 0;
        while (n%2 == 0) {
            n /= 2;
            cnt2++;
        }
        while (n%3 == 0) {
            n /= 2;
            cnt3++;
        }

        if(n != 1) {
            cout<<-1<<endl;
            return;
        }

        if(cnt2 <= cnt3) {
            cout<<2*cnt3 - cnt2<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}