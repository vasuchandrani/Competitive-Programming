#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;  cin>>n;

    string s;   cin>>s;

    int maxChar = 0;
    int maxIdx = 0;

    bool no = true;
    for (int i=0; i<s.length(); i++) {

        if (maxChar <= (s[i] - 'a')) {
            maxChar = (s[i] - 'a');
            maxIdx = i;
        }
        else { 
            no = false;
            cout<<"YES"<<endl;
            cout<<maxIdx<<" "<<i<<endl;
            break;
        }
    }

    if (no) cout<<"NO"<<endl;

    return 0;
}