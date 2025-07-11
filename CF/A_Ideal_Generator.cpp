#include<bits/stdc++.h>
using namespace std;

bool solvee () {
    int k;  cin>>k;

    if (k%2 == 1) {
        return true;
    } 
    return false;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}