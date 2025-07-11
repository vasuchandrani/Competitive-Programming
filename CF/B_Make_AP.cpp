#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee () {
    ll a, b, c;
    cin>>a>>b>>c;

    if ((a + c)%(2*b) == 0) {
        return true;
    }
    else if ((2*b - c > 0) && (2*b - c)%a == 0) {
        return true;
    } 
    else if ((2*b - a > 0) && (2*b - a)%c == 0) {
        return true;
    }
    return false ;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}