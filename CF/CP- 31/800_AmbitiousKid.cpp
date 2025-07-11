#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define lli long long int

int main() {
    int n;
    cin>>n;
    lli a[n];

    lli min = INT_MAX;

    for(int i=0;i<n;i++) {
        cin>>a[i];
        if (min > abs(a[i])) {
            min = abs(a[i]);
        }
    }
    cout<<min<<endl;
}