#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        
        vector<pair<lli, int>> a(n);
        for (int i=0;i<n;i++) {
            lli ele; cin>>ele;
            a.push_back(make_pair(ele,i));
        }
        vector<pair<lli, int>> b(n);
        for (int i=0;i<n;i++) {
            lli ele; cin>>ele;
            b.push_back(make_pair(ele,i));
        }
        vector<pair<lli, int>> c(n);
        for (int i=0;i<n;i++) {
            lli ele; cin>>ele;
            c.push_back(make_pair(ele,i));
        }

        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());

        lli ans = 0;
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                for (int k=0;k<3;k++) {
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
                        ans = max(ans, a[i].first+b[j].first+c[k].first);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
