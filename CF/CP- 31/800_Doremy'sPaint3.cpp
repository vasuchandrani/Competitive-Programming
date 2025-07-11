#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        map<int, int> m;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]++;
        }

        vector<int> freq;
        for (auto i : m) {
            freq.push_back(i.second);
        }

        if(m.size() > 2){
            cout<<"NO"<<endl;
            continue;
        }

        if (m.size() == 1) {
            cout<<"YES"<<endl;
            continue;
        }

        if (m.size() == 2) {
            if(abs(freq[0] - freq[1]) <= 1) {
                cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}