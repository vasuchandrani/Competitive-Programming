#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

void oPeration(vector<int> a, int n, int opr);
bool allRzero(vector<int> a, int n) {
    for(int i=0;i<n;i++) {
        if(a[i] != 0) {
            return false;
        }
    }
    return true;
}

void oPeration(vector<int> a, int n, int opr) {

    
    if(a[i] != 0) {
        a[i] = a[i] / 3;
    }
    
    if(a[n-i] != 0) {
        a[n-i] = a[n-i] * 3;
    }
    
    opr++;
    if(allRzero(a,n)) {
        cout<<opr<<endl;  
    } else {        
        sort(a.begin(), a.end());
        oPeration(a,n,opr);
    }
    
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int l, r;
        cin>>l>>r;
        int n = r - l + 1;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = l + i;
        }
        sort(a.begin(), a.end());
        oPeration(a,n,0);
    }
}