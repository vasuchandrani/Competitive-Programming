#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;  cin>>n; //size of arry

    vector<int> a;
    for (int i=0; i<n; i++) {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    sort(a.begin(), a.end());
    
    int scr = 0;
    for (int i=0; i<n; i++) {
        if (a[i] == a[i+1]) {
            scr++;
        }
    }

    cout<<scr<<endl;
}

int main () {
    int t;
    cin>>t;
    
    while (t--) {
        solve();
    }
    return 0;
}