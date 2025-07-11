#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    int n;  cin>>n;
    string s;   cin>>s;

    // string a = s[0] + ...;
    // string b = char which repeate again

    if (s[0] == s[1]) 
        return true;

    vector<int> abc(26, 0);
    bool flag = false;
    for (int i=n-1; i>0; i--) {
        if (abc[s[i] -'a'] > 0) {
            flag = true;
            break;
        }
        else {
            abc[s[i] - 'a']++;
        }
    }

    vector<int> abcd(26, 0);
    for (int i=0; i<n-1; i++) {
        if (abcd[s[i] -'a'] > 0) {
            flag = true;
            break;
        }
        else {
            abcd[s[i] - 'a']++;
        }
    }

    return flag ? true : false;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}