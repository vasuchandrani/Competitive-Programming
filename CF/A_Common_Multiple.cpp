#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;  cin>>t;

    while (t--) {
        int n;  cin>>n;

        set<int> st;
        for (int i=0; i<n; i++) {
            int ele;
            cin>>ele;
            st.insert(ele);
        }

        cout<<st.size()<<endl;
    }

    return 0;
}