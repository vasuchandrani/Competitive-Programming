#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int

bool pArity (lli a[], int n) {
    
    int odd = 0, even = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd == n || even == n) return true;
    else return false;
}

int oddMax (lli a[], int n) {

    lli maxi = 0;
    int idx;
    for(int i=0;i<n;i++) {
        if(a[i]%2 != 0) {
            if(maxi<a[i]){
                maxi = a[i];
                idx = i;
            }
            else {
                continue;
            }
        }
    }
    return idx;
}

void oPeration(lli a[], int n, int idx, int &cnt) {

    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            if(a[i]<a[idx]){
                cnt++;
                a[i] = (a[i] + a[idx]);
                a[idx] = max(a[i], a[idx]);
            }
            else{
                cnt++;
                a[idx] = (a[idx] + a[i]);
                oPeration(a, n, oddMax(a,n), cnt);
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        lli a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int cnt = 0;
        if (pArity(a, n)) {
            cout<<0<<endl;
        }
        else {
            
            oPeration(a, n, oddMax(a,n), cnt);
            cout<<cnt<<endl;
            cnt = 0;
        }
    }
    return 0;
}