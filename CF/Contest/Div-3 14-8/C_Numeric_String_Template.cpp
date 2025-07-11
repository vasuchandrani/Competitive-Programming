
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define lli long long int
 
int main() {
    int t;  cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<lli> a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
 
        int m;   cin>>m;
        while (m--) {
            string s;
            cin >> s;
            unordered_map<int, char> fin_c;
            unordered_map<char, int> fin_n;
            if (s.size() != n) {
                cout<<"NO"<<endl;
                continue;
            }
            bool check = true;
            for (int i=0;i<n;i++) {
                if (fin_c.count(a[i]) == 0 && fin_n.count(s[i]) == 0) {
                    fin_c[a[i]] = s[i];
                    fin_n[s[i]] = a[i];
                } else {
                    if (fin_c[a[i]] != s[i] || fin_n[s[i]] != a[i]) {
                        check = false;
                        break;
                    }
                }
            }
            if (check) {
               cout<<"YES"<<endl;
            } else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}