#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    ll x, y, k;
    cin>>x>>y>>k;

    ll reqCoal = k;
    ll reqStick = (k -1) + (reqCoal * y);

    ll trades = k; // for coal 

    trades += reqStick %(x-1) == 0 ? reqStick/(x-1) : reqStick/(x-1) +1;

    return trades;
}


int main () {
    int t;
    cin>>t;
    
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}