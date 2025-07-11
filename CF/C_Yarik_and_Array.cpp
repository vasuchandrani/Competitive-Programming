#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    int n;  cin>>n;
    vector<ll> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    int i = 0;
    int j = 0;
    ll maxSum = INT_MIN;

    ll sum = 0;
    while (j < n) {

        sum += a[j];
        
        if (j > 0 && (abs(a[j-1]) % 2 == abs(a[j]) % 2)) {

            i++;
            j = i;
            sum = a[j];    
        }
        
        if (a[j] > sum ) {
            sum = a[j];
            i = j;
        }

        maxSum = max(maxSum, sum);
        j++;

    }

    return maxSum;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
    return 0;
}