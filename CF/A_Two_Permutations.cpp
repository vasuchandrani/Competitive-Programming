#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    int n, a, b;
    cin>>n>>a>>b;

    if (a + b >= n-1) {
        if (a == n && b == n) 
            return true;
        else 
            return false;
        
    }
     
    return true;
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

    return 0;
}