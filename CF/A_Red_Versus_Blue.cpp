#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, r, b;
    cin>>n>>r>>b;

    int gap_size = r/ (b+1);
    int rem_r = r % (b+1);

    string result;

    for (int i=0; i<b; i++) {

        for (int i=0; i<gap_size; i++) {
            result.push_back('R');
        }
        if (rem_r > 0) {
            result.push_back('R');
            rem_r--;
        }

        result.push_back('B');
    }

    for (int i=0; i<gap_size; i++) {
        result.push_back('R');
    }
    cout<<result<<endl;    
}

int main () {
    int t;  cin>>t;

    while(t--) {
        solve();
    }
}