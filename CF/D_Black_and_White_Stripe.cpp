#include<bits/stdc++.h>
using namespace std;

int solvee() {

    int n, k;   cin>>n>>k;
    string s;   cin>>s;

    int i = 0;
    int j = 0;

    int white = 0;
    int minimumWhite = INT_MAX;
    while (j < n) {
        
        if (s[j] == 'W') {
            white++;
        }

        if ((j - i + 1) == k) {
            minimumWhite = min(minimumWhite, white);
            if (s[i] == 'W') {
                white--;
            }
            i++;
        }
        j++;
    }
    return minimumWhite;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
    return 0;
}