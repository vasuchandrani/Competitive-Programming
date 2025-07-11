#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool solvee() {
    ll a, b, c, d;
    cin>>a>>b>>c>>d;

    if (a >= b) {
        if (c >= b || c >= d) {
            return true;
        }
        else {
            return false;
        }
    }

    else {
        if (d <= a && d <= c) {
            return true;
        }
        else {
            return false;
        }
    }
}
int main() {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"Gellyfish"<<endl;
        }
        else {
            cout<<"Flower"<<endl;
        }
    }
    return 0;
}