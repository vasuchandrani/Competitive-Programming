#include<iostream>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while (t--) {
        int n, s, m;
        cin>>n>>s>>m;

        int l[n];
        int r[n];
        for(int i=0;i<n;i++) {
            cin>>l[i]>>r[i];            
        }
        
        int time = l[0];
        if (time >= s) {
            cout<<"YES"<<endl;
            continue;
        }
        if(m-r[n-1] >= s) {
            cout<<"YES"<<endl;
            continue;
        }
        
        bool no = true;
        for(int i=1;i<n;i++) {
            if(l[i]-r[i-1] >= s) {
                cout<<"YES"<<endl;
                no = false;
                break;
            }
        }
        if(no)
        cout<<"NO"<<endl;
    }
    return 0;
}