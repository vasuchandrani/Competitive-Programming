#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    int t;  cin>>t;
    while (t--) {
        int n;  cin>>n;
        int a[n];
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        string s;
        cin>>s;

        int start;
        int end;
        int sum = 0;
        bool uCanAdd;
        for (int i=0;i<n;i++) {
            uCanAdd = false;
            if (s[i] == 'L') {
                start = i;
                for (int j=i;j<n;j++) {
                    if (s[j] == 'R') {
                        end = j;
                        uCanAdd = true;
                        break;
                    }
                }
            }
            if(uCanAdd){
                for (int k=start;k<=end;k++) {
                    sum += a[k];
                }
                if(end == n-1) break;
            } 
        }
        cout<<sum<<endl;
    }
    return 0;
}
