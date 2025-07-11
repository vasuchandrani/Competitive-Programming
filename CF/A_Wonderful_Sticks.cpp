#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;  cin>>n;
    string s;   cin>>s;

    vector<int> ans(n);
    int j = 1;
    int k = n;
    for (int i=n-2; i>=0; i--) {
        if (s[i] == '<') {
            ans[i+1] = j;
            j++;
        }
        else {
            ans[i+1] = k;
            k--;
        }
    }
    ans[0] = j;

    for (int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}