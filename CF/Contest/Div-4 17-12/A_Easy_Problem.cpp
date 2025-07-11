#include<bits/stdc++.h>
using namespace std;

void solvee() {

    int n; cin>>n;
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i + j == n) {
                cnt++;
            } 
        }
    }
    cout<<cnt<<endl;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
    return 0;
}