#include<bits/stdc++.h>
using namespace std;

char solvee () {

    int a = 0, b = 0, c = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            char x;
            cin>>x;
            if (x == 'A')   a++;
            if (x == 'B')   b++;
            if (x == 'C')   c++;
        }
    }
    if (a < 3)  return 'A';
    if (b < 3)  return 'B';

    return 'C';
}

int main () {
    int t;  cin>>t;

    while (t--) {
        cout<<solvee()<<endl;;
    }
}