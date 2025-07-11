#include<bits/stdc++.h>
using namespace std;

bool solvee() {
    int l, r, d, u;
    cin>>l>>r>>d>>u;

    int dia1 = (r + l);
    int dia2 = (u + d);
    
    int w = sqrt(pow(r, 2) + pow(d, 2));
    int x = sqrt(pow(r, 2) + pow(u, 2));
    int y = sqrt(pow(l, 2) + pow(u, 2));
    int z = sqrt(pow(l, 2) + pow(d, 2));

    if (w == x && x == y && y == z && z == w && dia1 == dia2) {
        return true;
    }

    return false;
}

int main() {
    int t;  cin>>t;
    while (t--) {
        if (solvee()) {
            cout<<"yes"<<endl;
        }
        else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}