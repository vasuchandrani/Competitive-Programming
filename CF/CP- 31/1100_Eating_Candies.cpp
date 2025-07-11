#include<bits/stdc++.h>
using namespace std;

void solvee() {

    int n;  cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<int> left(n);
    for (int i=0; i<n; i++) {

        if (i == 0) {
            left[i] = v[i];
            continue;
        }
        left[i] = v[i] + left[i-1];
    }

    vector<int> right(n);
    for (int i=n-1; i>=0; i--) {

        if (i == n-1) {
            right[i] = v[i];
            continue;
        }
        right[i] = v[i] + right[i+1]; 
    }

    int l = 0;
    int r = n-1;

    int candies = 0;
    while (l < r) {
        
        if (left[l] == right[r]) {
            candies = max (candies, l+(n-1 - r)+2) ;
            l++;
            r--;
        }
        if (right[r] > left[l]) {
            l++;
        }
        if (right[r] < left[l]) {
            r--;
        }
    } 

    cout<<candies<<endl;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}