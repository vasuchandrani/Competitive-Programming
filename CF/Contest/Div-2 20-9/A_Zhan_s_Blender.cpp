#include<iostream>
using namespace std;
#define ll long long

int main () {
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin>>n>>x>>y;
        int c = 3;
        
        if (x <= y) {
            if (n % x == 0) 
               cout<<(n / x)<<endl;
            else 
                cout<<(n / x) + 1<<endl;
        }

        else {
            if (n % y == 0) 
               cout<<(n / y)<<endl;
            else 
                cout<<(n / y) + 1<<endl;
        }

    }
    return 0;
}