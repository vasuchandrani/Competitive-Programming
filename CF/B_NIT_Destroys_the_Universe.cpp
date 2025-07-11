#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    bool nonzero = false;

    for (int i=0; i<n; i++) {
        cin>>a[i]; 
        if(a[i] != 0) 
            nonzero = true;
    }

    if (!nonzero)  return 0;


    int cnt = 0;
    bool sequence = false;

    for (int i=0; i<n; i++) {
        if (a[i] != 0) {

            if (!sequence) {
                cnt++;
                sequence = true;
            }
            if (cnt == 2) {
                return cnt;
            }
        }
        else {
            sequence = false;
        }
    }

    return cnt;
}

int main() {
    int t;  cin>>t;
    while(t--) {
        cout<<solvee()<<endl;
    }
}