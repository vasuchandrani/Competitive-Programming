#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int n;  cin>>n;

    string s1;
    cin>>s1;
    string s2;
    cin>>s2;

    int cnt = 0;
    for (int i=1; i<n-1; i++) {

        if (s1[i] == '.') {

            if (s2[i] == '.' && s2[i+1] == 'x' && s2[i-1] == 'x' && s1[i-1] == '.' && s1[i+1] == '.') {
                cnt++;
            }
        }
        
        if (s2[i] == '.') {
            if (s1[i] == '.' && s1[i+1] == 'x' && s1[i-1] == 'x' && s2[i-1] == '.' && s2[i+1] == '.') {
                cnt++;
            }
        }
    }

    return cnt;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}