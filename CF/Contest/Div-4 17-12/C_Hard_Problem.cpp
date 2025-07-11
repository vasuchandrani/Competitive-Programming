#include<bits/stdc++.h>
using namespace std;

void solve() {
    int m, a, b ,c;
    cin>>m>>a>>b>>c;

    int cnt = 0;
    int m1 = m;
    int m2 = m;

    cnt += a < m1 ? a : m1;
    m1 -= a < m1 ? a : m1;
    cnt += b < m2 ? b : m2;
    m2 -= b < m2 ? b : m2;
    
    if (m1 + m2 > 0) {
        cnt += (m1+m2) < c ? (m1+m2) : c;
    }

    cout<<cnt<<endl;
}

int main() {
    int t;  cin>>t;

    while (t--) {
        solve();
    }
}