#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
    int n;  cin>>n;
    int c[n], sum[n];

    for (int i=0; i<n; i++) {
        cin>>c[i]>>sum[i];
    }

    ll cost;
    for (int i=0; i<n; i++) {
        cost = 0;
        if (sum[i] < c[i]) {
            cout<<sum[i]<<endl;
        }
        else if (sum[i] % c[i] == 0) {
            cost = (ll) c[i]*(sum[i]/c[i] * sum[i]/c[i]);
            cout<<cost<<endl;
        }
        else {
            int k = sum[i]/c[i];
            int remain = sum[i] % c[i];
            int radiator = c[i] - remain; 
            cost += (ll) radiator * k*k;

            cost += (ll) remain * (k+1)*(k+1);
            cout<<cost<<endl;
        }
    }
    return 0;
}