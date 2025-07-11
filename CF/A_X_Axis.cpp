#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int a, b, c;
    cin>>a>>b>>c;

    if (a > b)  swap(a, b);
    if (b > c)  swap(b, c);
    if (a > b)  swap(a, b);


    return abs(a-b) + abs(b-c);
}

int main() {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee()<<endl;
    }
}