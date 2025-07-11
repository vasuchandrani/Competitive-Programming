#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee() {
    ll a, b;
    cin>>a>>b;

    if (a == b) {
        cout<<0<<" "<<0<<endl;
    }   
    else {
        if (a < b) 
            swap (a, b);

        // gcd(a, b) == gcd(a-b, b);

        ll diff = a-b; // maximum gcd can be achieved
        ll opr = min(b%diff, diff - b%diff);
        
        cout<<diff<<" "<<opr<<endl;
    }

}


int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}
