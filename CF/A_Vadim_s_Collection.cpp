#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;  cin>>t;
    while (t--) {
        string s;   cin>>s;

        vector<int> cnt(10, 0);
        for (int i=0; i<10; i++) {
            cnt[s[i] - '0']++;
        }

        vector<int> ans(10);
        for (int i=0; i<10; i++) {
            int ele = 9 - i;
            for (int j=ele; j<10; j++) {
                if (cnt[j] > 0) {
                    ans[i] = j;
                    cnt[j]--;
                    break;
                }
            }
        }

        for (int i=0; i<10; i++) {
            cout<<ans[i];
        }cout<<endl;
    }
}