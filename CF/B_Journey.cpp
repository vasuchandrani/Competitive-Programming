#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {
    ll n, a, b, c;
    cin>>n>>a>>b>>c;

    ll cnt = 0;
    cnt += 3 * (n / (a+b+c));

    ll remain = n%(a+b+c);  
    
    if (remain > 0)
        cnt += remain > a+b ? 3 : (remain > a ? 2 : 1);

    cout<<cnt<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}
