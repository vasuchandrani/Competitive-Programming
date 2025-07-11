#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;
    string s;   cin>>s;

    set<char> st;
    vector<int> left(n);
    for (int i=0; i<n; i++) {
        if (st.find(s[i]) == st.end()) {
            st.insert(s[i]);
        }
        left[i] = st.size();
    }

    st.clear();
    vector<int> right(n);
    // right[n-1] = 0;
    // st.insert(s[n-1]);
    for (int i=n-1; i>=0; i--) {
        right[i] = st.size();
        if (st.find(s[i]) == st.end()) {
            st.insert(s[i]);
        }
    }

    // for (int i=0; i<n; i++) cout<<left[i]<<" ";
    // cout<<endl;

    // for (int i=0; i<n; i++) cout<<right[i]<<" ";
    // cout<<endl;

    int maxCount = 0;
    for (int i=0; i<n; i++) {
        maxCount = max(maxCount, left[i] + right[i]);
    }

    return maxCount;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}