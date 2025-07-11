#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;  cin>>n;
    string s;   cin>>s;

    if ((s[0] == 'B' && s[n-1] == 'B') || 
        (s[n-1] == 'B' && s[n-2] == 'B') || 
        (s[0] == 'B' && s[n-2] == 'B')) {
            cout<<"Bob"<<endl;
    }
    else if ((s[0] == 'A' && s[n-1] == 'A') || 
             (s[n-1] == 'A' && s[n-2] == 'A')) {
            cout<<"Alice"<<endl;
    }
    else {
        int b = 0;
        for (int i=0; i<n-1; i++) {
            if (s[i] == 'B') {
                b++;
                break;
            }
        }

            if (s[0] == 'A' && s[n-2] == 'A' && s[n-1] == 'B') {
                if (b == 1) {
                    cout<<"Bob"<<endl;
                }
                else {
                    cout<<"Alice"<<endl;
                }
            }

    }
}

int main () {
    int t;  cin>>t;
    
    while (t--) {
        // cout<<8-t<<endl;
        solvee();    
    }
}