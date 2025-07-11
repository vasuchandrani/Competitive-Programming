#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n, k, p;
    cin>>n>>k>>p;

    int opr = -1;
    k = abs(k);
        
    if (n*p < k) {
        return -1;
    }

    opr = (k % p==0) ? k/p : k/p + 1;
   
    return opr;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}