#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int 

int main() {
    int t;
    cin>>t;
    while(t--) {
        lli n;
        cin>>n;
        lli x;
        if(n%2 != 0 || n == 2) {
            cout<<-1<<endl;
        }
        else {
            if(n%6 != 0) { // minimum buses
                x = n/6 + 1;
            }
            else {
                x = n/6;
            }
            // y = n/4; - maximum buses 
            cout<<x<<" "<<n/4<<endl;
        }
    }
    return 0;
}