#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee () {
    int n;  cin>>n;
    vector<ll> a(n);
    
    int cnt0 = 0, cnt1 = 0;

    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i] == 1)  cnt1++;
        if (a[i] == 0)  cnt0++;
    }

    return 1L*(pow(2,cnt0) * cnt1);

}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}