#include<bits/stdc++.h>
using namespace std;

void solve () {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if (b == d) {
        if (a >= c) {
            int cnt = a - c;
            cout<<cnt<<endl;
        } else {
            cout<<-1<<endl;
        }
    }
    else if (b < d) {
        int cnt = 0;
        cnt += d - b;
        b = d;  // b = b + cnt
        a = a + cnt;

        if (a < c) {
            cout<<-1<<endl;
        }
        else {
            cnt += a - c;
            cout<<cnt<<endl;
        }

    }
    else {
        cout<<-1<<endl;
    }
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solve();
    }
}