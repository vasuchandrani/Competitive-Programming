#include<bits/stdc++.h>
using namespace std;
 
void solve() {
 
    int n;  // number of words
    int m;  // number of words fit in strip-1
 
    cin>>n>>m;
 
    vector<string> words(n);
    for (int i=0; i<n; i++) {
        cin>>words[i];
    }
 
    int sum = 0;
    int cnt = 0;
    for (int i=0; i<n; i++) {
 
        if (sum + words[i].length() <= m) {
            sum += words[i].length();
            cnt++;
        }
        else {
            break;
        }
    }
    cout<<cnt<<endl;
}
 
int main () {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}