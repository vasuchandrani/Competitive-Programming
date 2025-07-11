#include<bits/stdc++.h>
using namespace std;

int solvee (int n, int digit) {
    if (n <= 10)    return n;

    return 9*(digit-1) + n/ pow(10, digit-1);
}

int main () {
    int t;  cin>>t; 
    while (t--) {
        int n;  cin>>n;
        string s = to_string(n);
        int digit = s.length();
        cout<<solvee(n, digit)<<endl;
    }

    return 0;
}