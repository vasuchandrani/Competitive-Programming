// incomplete

#include<bits/stdc++.h>
using namespace std;

int fn (string s, int idx) {

    unordered_set<char> st;
    for (int i=idx; i<s.length(); i++) {
        st.insert(s[i]);
    }
    return st.size();
}

int main () {
    int t;  cin>>t;

    while (t--) {
        int n;  cin>>n;
        string s;   cin>>s;

        int cnt = 0;
        unordered_set<char> st;

        int ans = 0;
        for (int i=0; i<n; i++) {
            
            if (st.count(s[i])) {
                ans += fn(s, i);
                break;
            } 
            ans++;
            st.insert(s[i]);
        }

        cout<<ans<<endl;
    }
}