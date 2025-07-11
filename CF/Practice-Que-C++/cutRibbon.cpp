#include<iostream>
using namespace std;
#define lli long long int 

int main() {
    lli n, a, b, c;
    cin>>n>>a>>b>>c;

    lli pieces = 0;
    for (lli x=0;x*a<=n;x++) {
        for (lli y=0;(x*a + b*y) <= n;y++) {
            lli zc;
            lli z;
            zc = n - (x*a + y*b); 
            if(zc%c == 0) {
                z = zc/c;
                pieces = max(pieces, x+y+z);
            }
        }
    }
    cout<<pieces<<endl;
    return 0;
}