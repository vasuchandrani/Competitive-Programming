#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    ll l, r;
    cin>>l>>r;

    ll opr = 0;
    // first make 1st element zero 
    ll ele = l;
    while (ele > 0) {
        ele /= 3;
        opr += 2;  
    }

    // for second element 
    l++;
    ele = l;
    ll cnt = 0;     
    ll curr = 1;
    while (ele > 0) {
        ele /= 3;
        curr *= 3;
        cnt++;
    }

    while (curr <= r) {
        opr += (min(r+1, curr) - max(l, curr/3)) * cnt;
        curr *= 3;
        cnt++;
    }

    opr += (min(r+1, curr) - max(l, curr/3)) * cnt;
    return opr; 
     
}

int main() {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
    return 0;
}