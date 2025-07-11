#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee (vector<ll> &a) {

    int n;  cin>>n;
    vector<ll> b(n);
    for (int i=0; i<n; i++) {
        cin>>b[i];
        if (i > 0 && b[i] < b[i-1]) {
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }
}


int main () {
    int t;  cin>>t;
    while (t--) {
        vector<ll> a;
        solvee(a);
        cout<<a.size()<<endl;
        for (auto ele : a) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}