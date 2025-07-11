#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while (t--) {
        int n; cin>>n;
        vector<int> a(n);
        unordered_set<int> ocp;
 
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        ocp.insert(a[0]);
 
        bool No = false;
        for (int i=1; i<n; i++) {
            int seat = a[i];
            if (ocp.count(seat - 1) == 0 && ocp.count(seat + 1) == 0) {
                No = true;
                break;
            }
            ocp.insert(seat);
        }
 
        if (No) {
           cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

// time-limit exeed

// #include<iostream>
// using namespace std;

// bool solvee (int ai, int a[], int n) {

//     int cnt = 0;
//     for (int i=0;i<n;i++) {
//         if (a[i] == ai + 1) {
//             cnt++;
//             break;
//         }  
//     }
//     for (int i=0;i<n;i++) {
//         if (a[i] == ai - 1) {
//             cnt++;
//             break;
//         }  
//     }
//     if (cnt >= 1) return true;
//     else return false;
// }

// int main() {
//     int t;
//     cin>>t;

//     while (t--) {
//         int n;  cin>>n;
//         int a[n];
//         for (int i=0;i<n;i++) {
//             cin>>a[i];
//         }

//         bool No = false;
//         for (int i=1;i<n;i++) {
//             if(solvee(a[i], a, i)) {
//                 continue;
//             }
//             else {
//                 No = true;
//                 break;
//             }
//         }
//         if (No) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
//     }
//     return 0;
// }