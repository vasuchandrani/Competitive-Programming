#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;
    vector<int> a(n);

    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());
 
    if (((a[0] + a[n-1]) %2)!= 0) {
        int cnt1 = 0;
        int i = 0;
        while ((a[i] + a[n-1]) % 2 != 0) {
            cnt1++;
            i++;
        }
        
        int cnt2 = 0;
        i = n-1;
        while ((a[0] + a[i]) % 2 != 0) {
            cnt2++;
            i--;
        }

        return min(cnt1, cnt2);
    }
    return 0;
}

int main () {
    int t;  cin>>t;
    while(t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}