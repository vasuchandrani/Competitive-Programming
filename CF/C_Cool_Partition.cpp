#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    int i = n -1;
    unordered_map<int, int> curr;
    unordered_map<int, int> prev;

    int cnt = 1;

    while (i >= 0) {
        
        if (prev[a[i]] > 0) {
            cnt++;
            break;
        }
        else {
            prev[a[i]]++;
        }
        i--;
    }

    while (i >= 0) {

        if (prev[a[i]] > 0) {
            curr[a[i]]++;
            prev[a[i]]--;
        }
        else if (curr[a[i]] <= 0) {
            cnt--;
        }
        else {
            cnt++;
            prev = curr;

            prev[a[i]]--;
            curr[a[i]]++;
        }
        i--;
    }
    return cnt;
} 

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}