#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define lli long long int

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector<int> v(n,0);
        for(int i=0;i<n;i++) {
            int ele;
            cin>>ele;
            if(i>0) {
                v[i] = v[i-1] + ele; // for prefix sum
            } else {
                v[i] = ele; // for 1st element
            }
        } 
        while (q--) {
            int l, r, k;
            cin>>l>>r>>k;
            l--;r--; // idxs

            int x = v[r] - v[l-1];
            if(l == 0) {
                x = v[r];
            }

            int y = k * (r-l+1);

            if((v[n-1] - x + y)%2) {                    
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}



// int main() {
//     int t;
//     cin>>t;
//     while (t--) {
//         int n, q;
//         cin>>n>>q;
//         vector<lli> v(n);
//         lli beforeSum = 0;
//         for (int i=0;i<n;i++) {
//             cin>>v[i];
//             beforeSum += v[i];
//         }

//         lli sum = 0;
//         lli l, r, k;
//         for (int i=0;i<q;i++) {
//             cin>>l>>r>>k;
//             sum = beforeSum;
//             for (int i=l-1;i<r;i++) {
//                 sum -= v[i];
//                 sum += k;
//             }
//             if(sum%2 != 0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }