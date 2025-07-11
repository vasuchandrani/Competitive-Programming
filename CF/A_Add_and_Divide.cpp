#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solvee() {
    ll a, b;
    cin>>a>>b;
    
    if (b > a) return 1;
    if (b == a) return 2;
    
    bool one = false;
    if (b == 1) {
        b++;
        one = true;
    }

    int power = 2;
    int opr = INT_MAX;
    while (b < a) {
        int temp = 0;
        ll div = pow(b, power);
        cout<<div<<endl;
        while (div <= a) {
            
            power++;
            temp++;
            div = pow(b, power);
        }
        cout<<temp<<endl;
        cout<<div<<endl;
        b++;
        if (temp >= opr) {
            break;
        } 
        else {
            opr = temp;
        }
    }
    cout<<opr<<" +"<<endl;
    return one ? opr + 1 : opr;

}

int main () {
    int t;  cin>>t;

    while (t--) {
        solvee();   
    }

    return 0;
}