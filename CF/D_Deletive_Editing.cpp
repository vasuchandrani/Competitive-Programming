#include<bits/stdc++.h>
using namespace std;

bool solvee () {
    string s, t;
    cin>>s>>t;

    map<char, int> m1, m2;
    for (auto ch : s) m1[ch]++;
    for (auto ch : t) m2[ch]++;

    int i=0, j=0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {

            if (m1[s[i]] < m2[t[j]]) {
                return false;
            }

            if (m1[s[i]] == m2[t[j]]) {
                m2[t[j]]--;
                j++;
            }
        }

        m1[s[i]]--;
        i++;
    }

    return j == t.length();
}

int main () {
    int t;  cin>>t;
    while (t--) {
        
        if (solvee()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}