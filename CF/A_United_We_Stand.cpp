#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {
    int n;  cin>>n;
    
    vector<ll> a(n);
    map<int, int> mp;
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
        mp[a[i]]++;
    }

    if (mp.size() == 1) {
        cout<<-1<<endl;
    }

    else {
        // array b
        int b = mp.begin() -> first;
        int lb = mp.begin() -> second;
        
        // array c
        int lc = n - lb;

        cout << lb << " " << lc <<endl;
        
        for (int i=0; i<lb; i++) {
            cout<<b<<" ";
        }cout<<endl;
    
        mp.erase(b);
        
        for (auto it : mp) {
            int ele = it.first;
            int freq = it.second;
            for (int i=0; i<freq; i++) {
                cout<<ele<<" ";
            }
        }cout<<endl;
    }
}

int main () {
    int t;  cin>>t; 
    while (t--) {
        solvee ();
    }
}