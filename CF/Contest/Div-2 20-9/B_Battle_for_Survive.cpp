#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
    int t;
    cin>>t;

    while (t--) {
        int n;  cin>>n;
        ll a[n];

        ll sum = 0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
            sum += a[i];
        }        

        sum = sum - a[n-1] - a[n-2];
        a[n-2] -= sum;
        a[n-1] -= a[n-2];

        cout<<a[n-1]<<endl;
    }
}