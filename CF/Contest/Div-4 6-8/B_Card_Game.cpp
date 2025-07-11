#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
 
        int round = 0;
        if(a1>b1 && a2>b2 || a1>=b1 && a2>b2 || a1>b1 && a2>=b2) {
            round++;
        }
        if(a1>b2 && a2>b1 || a1>=b2 && a2>b1 || a1>b2 && a2>=b1) {
            round++;
        }
        if(a2>b2 && a1>b1 || a2>=b2 && a1>b1 || a2>b2 && a1>=b1) {
            round++;
        }
        if(a2>b1 && a1>b2 || a2>=b1 && a1>b2 || a2>b1 && a1>=b2) {
            round++;
        }
        cout<<round<<endl;
    }
    return 0;
}