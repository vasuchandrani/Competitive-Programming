#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int n;  cin>>n;
    string s;   cin>>s;

    int i = 0;
    int j = n-1;

    while (i < j) {
        if (s[i] == s[j])   
            break;
        else 
            n -= 2;
        
        i++;
        j--;
    }

    return n;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}