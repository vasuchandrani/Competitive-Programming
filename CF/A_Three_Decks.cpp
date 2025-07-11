#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {

    ll a, b, c;
    cin>>a>>b>>c;

    if ((a+b+c)% 3 == 0) {
        ll need = (a + b + c)/3;
        if (need < b || need < a) {
            cout<<"NO"<<endl;
        }
        else {
            ll needA = need - a;
            ll needB = need - b;
              
            if (c - needA - needB == need) 
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl; 
        }
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}