#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int n;  cin>>n;
    int s;  cin>>s;

    int mini = INT_MAX;
    int maxi = INT_MIN;
    vector<int> x(n);
    for (int i=0; i<n; i++) {
        cin>>x[i];
        if (x[i] > maxi) 
            maxi = x[i];
        if (x[i] < mini) 
            mini = x[i];
    }

    int ans = 0;
    if (abs(mini -s) < abs(maxi -s)) {
        ans += (abs(mini -s) + abs(maxi -mini));
    }
    else {
        ans += (abs(maxi -s) + abs(maxi -mini));
    }
    return ans;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}