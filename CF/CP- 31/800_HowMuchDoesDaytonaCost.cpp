#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        int a[n];

        bool No = true;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i] == k) {
                No = false;
            }
        }   
        if(No) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}