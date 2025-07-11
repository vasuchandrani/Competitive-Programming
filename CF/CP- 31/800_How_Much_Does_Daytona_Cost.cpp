#include<bits/stdc++.h>
using namespace std;

void solve() {
        int n, k;
        cin>>n>>k;
        // int a[n];

        bool yes = false;
        for (int i=0; i<n; i++) {
            int ele;
            cin>>ele;

            if (ele == k) {
                yes = true;
            }
        }

        if (yes) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
}

int main () {

    int t;  cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
 
void solve() {
        int n, k;
        cin>>n>>k;
        int a[n];
 
        bool yes = false;
        for (int i=0; i<n; i++) {
            cin>>a[i];
 
            if (a[i] == k) {
                yes = true;
            }
        }
 
        if (yes) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
}
 
int main () {
 
    int t;  cin>>t;
    while (t--) {
        solve();
    }
 
    return 0;
}
*/