#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee () {
    int n; 
    ll d;
    cin>>n>>d;
    vector<ll> p(n);
    for (int i=0; i<n; i++) cin>>p[i];

    sort(p.begin(), p.end(), greater<ll>());

    // for (int i=0; i<n; i++) cout<<p[i]<<" ";
    // cout<<endl;

    int cnt = n;
    int win = 0;
    for (int i=0; i<n; i++) {
        if (cnt <= 0) {
            break;
        }
        ll temp = p[i];
        if (temp > d) {
            win++;
            cnt--;
        }
        else if (d % temp == 0) {
            if ((d/temp)*temp > d)
                cnt -= d/temp;
            else 
                cnt -= (d/temp + 1);

            if (cnt >= 0) win++;
        }
        else {
            cnt -= (d/temp + 1);
            if (cnt >= 0) win++;
        }
    }
    return win;
}

int main () {
    cout<<solvee() <<endl;
}