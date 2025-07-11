#include<bits/stdc++.h>
using namespace std;

void solvee() {

    int n, k;  cin>>n>>k;
    int a[n];

    set<int> s;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        s.insert(a[i]);
    }

    for (int i=0; i<n; i++) { 
        bool win = true;
        for (int j=0; j<n; j++) {
            if (i!=j && abs(a[i] - a[j]) % k != 0) { 
                continue;
            } 
            else if(i != j){
                // cout<<a[i]<<" "<<a[j]<<" "<<k<<endl;
                win = false;
                break;
            }
        }
        if (win) {
            cout << "YES" << endl; 
            cout <<i+1<< endl; 
            return; 
        }
    }   
    cout<<"NO"<<endl;
}


int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}