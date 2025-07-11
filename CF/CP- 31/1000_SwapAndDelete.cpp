#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int one = 0;
        int zero = 0;
        int n = s.length();
        for (int i=0;i<n;i++) {
            if(s[i] == '1') one++;
            else zero++;
        }

        for (int i=0;i<n;i++) {
            if(s[i] == '0') {
                if(one) one--;
                else break;
            }
            else {
                if(zero) zero--;
                else break;
            }
        }

        cout<<(one + zero)<<endl;
    }
    return 0;
}