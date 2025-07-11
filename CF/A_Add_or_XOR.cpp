#include<bits/stdc++.h>
using namespace std;

int solvee() {
    int a, b, x, y;
    cin>>a>>b>>x>>y;

    if (a > b + 1) {
        return -1;
    }
    else if (a > b) {
        if (a % 2 == 0) 
            return -1;
        else 
            return y;
    }

    int cost = 0;
    while (a != b) {

        if (a % 2 == 0 && y < x) {
            cost += y;
            a = a ^ 1;
        }   
        else {
            cost += x;
            a += 1;
        }
    }

    return cost;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
    
}