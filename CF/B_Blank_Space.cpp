#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;

    int ans = 0;
    int temp = 0;
    for (int i=0; i<n; i++) {
        int ele;    cin>>ele;
        if (ele == 1) {
            ans = max(ans, temp);
            temp = 0;
        }
        else {
            temp++;
        }
    }
    ans = max(ans, temp);

    return ans;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }   
}