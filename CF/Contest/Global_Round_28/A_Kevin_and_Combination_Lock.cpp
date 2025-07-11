#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {

    ll x;   cin>>x;


    if (x % 33 == 0) {
        cout<<"YES"<<endl;    
    }
    else {
        string s = to_string(x);
        while (x >= 33) {

            int pos = s.find("33");
            if (pos != string::npos) {
                s.erase(pos, 2);

                x = stoi(s);
            } else {
                cout<<"NO"<<endl;
                return;
            }

            if (x % 33 == 0) {
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
    
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solve();
    }
}