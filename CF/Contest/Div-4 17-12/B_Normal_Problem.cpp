#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string ans = "";
    int n = s.length();

    for (int i=0; i<n; i++) {
        char ch = s[i];

        if (ch == 'p'){
            ans = 'q' + ans;
        } 
        else if (ch == 'q') {
            ans = 'p' + ans;
        } 
        else {
            ans = ch + ans;
        }
    }

    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
