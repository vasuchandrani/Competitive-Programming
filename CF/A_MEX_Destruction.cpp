#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {

    int n;  cin>>n;
    vector<int> v(n);

    for (auto &i : v) {
        cin >> i;
    }

    int two = 0 , flag = 0;
     
    for (int i : v) {
        if (i != 0 && !flag) {
            two++;
            flag = 1;
        }
        if (i == 0) {
            flag = 0;
        }
    }

    cout<<(two > 2 ? 2 : two)<<endl;;

}

int main() {
    int t; cin>>t; 
    while (t--){
        solve();
    }
}


// not working in [1, 0, 0]
// #include<bits/stdc++.h>
// using namespace std;
 
// void solve() {
//     int n;     cin>>n;
//     vector<int> a(n);
 
//     bool zero = true;
//     for (int i=0; i<n; i++) {
//         cin>>a[i];
 
//         if (a[i] != 0) {
//             zero = false;
//         }
//     }
 
//     if (zero) {
//         cout<<0<<endl;
//         return;
//     }
 
//     bool one = true;
    
//     for (int i=1; i<n-1; i++) {
//         if (a[i] == 0) {
//             one = false;
//             break;
//         }
//     }
 
//     if (one) {
//         cout<<1<<endl;
//     }
//     else {
//         cout<<2<<endl;
//     }
// }
 
// int main() {
//    int t;  cin>>t;
//    while (t--) {
//        solve();
//    }
// }