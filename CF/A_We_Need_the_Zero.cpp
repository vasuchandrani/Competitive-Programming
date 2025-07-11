#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int n;  cin>>n;
    int xor_sum = 0;
    
    for (int i=0; i<n; i++) {
        int ele;    cin>>ele;
        xor_sum ^= ele;
    }

    if (n % 2 == 0) {
        if (xor_sum == 0) 
            return 1;
        else 
            return -1;
    }
    
    return xor_sum;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }

    return 0;
}