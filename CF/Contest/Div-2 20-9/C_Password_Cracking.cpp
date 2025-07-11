#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool getResponse(string &s) {
    
    bool res;
    cout<< "? " << s << endl;

    cin>>res;
    return res;
}

void solve () {

    ll n;
    cin>>n;
    string s = "0";

    bool res = getResponse(s);
    if (!res) {
        s = "1";
    }
    while (s.length() < n) {
        
        s += "0";
        res = getResponse(s);

        if (!res) {
            s.pop_back();
            s += "1";
            res = getResponse(s);
            if (!res) {
                s.pop_back();
                break;
            }
        }
    }
    while(s.length() < n) {

        s = "0" + s;
        res = getResponse(s);

        if (!res) {
            s = s.substr(1);
            s = "1" + s;
            res = getResponse(s);
            if (!res) {
                s = s.substr(1);
                break;
            }
        }
    }
    cout<<"! "<< s << endl;
}

int main () {

    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}