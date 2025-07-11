#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;
    vector<int> a(n);

    int sum = 0;
    for (int i=0; i<n; i++) {
        cin>>a[i];

        sum += a[i];
    } 

    return (sum - n + 1);
}

int main() {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
    return 0;
}