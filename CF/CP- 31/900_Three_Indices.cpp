#include<bits/stdc++.h>
using namespace std;

void solvee() {
    int n;  cin>>n;
    
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    if (a[0] != n && a[n-1] != n) {
        cout<<"YES"<<endl;

        for (int i=1; i<n-1; i++) {
            if (a[i] == n) {
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
    }
    else {
        bool NO = true;

        int first, third; 
        int second;

        for (int i=1; i<n-1; i++) {

            first = -1;
            third = -1;
            for (int j=0; j<i; j++) {
                
                if (a[j] < a[i]) {
                    first = j;
                    break;
                }
            }

            for (int k=i+1; k<n; k++) {
                
                if (a[k] < a[i]) {
                    third = k;
                    break;
                }
            }   

            if (first != -1 && third != -1) {
                NO = false;
                second = i;
                break;
            }
        }
        if (!NO) {
            cout<<"YES"<<endl;
            cout<<first+1<<" "<<second+1<<" "<<third+1<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}