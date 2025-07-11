#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;  cin>>t;
    while (t--) {
        int n;  cin>>n;
        
        int pos = 0;
        int neg = 0;
        for (int i=0; i<n; i++) {
            int ele;    cin>>ele;
            if (ele < 0) neg++;
            else pos++;
        }

        int opr = 0;
        if (pos < neg) {
            int temp = neg - pos;
            opr = (temp %2 == 0) ? temp/2 : temp/2 +1;

            neg -= opr;
        }

        if (neg % 2 != 0) opr++;
    
        cout<<opr<<endl;
    }
}