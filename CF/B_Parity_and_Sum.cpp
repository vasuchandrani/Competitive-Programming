#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    
    int odd = 0;
    int even = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] & 1)
            odd++; 
        else 
            even++;
    }

    if (odd == n || even == n) {
        // cout<<"return"<<endl;
        return 0;
    }

    sort(a.begin(), a.end());

    if (a[n-1] & 1) {
        return even;
    }

    int k = n-1;
    while ((a[k] & 1) == 0) {
        k--;
    }

    int cnt = 0;

    for (int i=0; i<n; i++) {
        if ((a[i] & 1) == 0) {
            if (a[i] < a[k]) {
                cnt++;
                a[i] += a[k];
                a[k] = a[i];
            }
            else {
                a[k] += a[n-1];
                a[n-1] += a[k];
                cnt += 2;
                i--;
            }
        }
    }

    return cnt;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}