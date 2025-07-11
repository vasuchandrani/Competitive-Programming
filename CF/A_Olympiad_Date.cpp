#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;
    vector<int> v(n);

    vector<int> cnt(6);

    for (int i=0; i<n; i++) {
        cin>>v[i];
    }

    for (int i=0; i<n; i++) {
        if (v[i] <= 5)
            cnt[v[i]]++;
        
        if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[3] >= 1 && cnt[2] >= 2 && cnt[5] >= 1) {
            return i + 1;
        }
    }

    return 0;
}

int main () {
    int t;  cin>>t;

    while (t--) {
        cout<<solvee()<<endl;        
    }
    
}