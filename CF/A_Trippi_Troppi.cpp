#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;  cin>>t;

    cin.ignore();
    while (t--) {
        string s;   
        getline(cin, s);

        string ans = "";
        ans.push_back(s[0]);
        for (int i=0; i<s.length(); i++) {
            if (s[i] == ' ' && (i+1)<s.length()) {
                ans.push_back(s[i+1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}   