#include<bits/stdc++.h>
using namespace std;

// void solvee() {
//     int n;  cin>>n;

//     vector<int> v;
//     for (int i=0; i<n; i++) {
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     for (int i=0; i<n; i++) {
//         for (int j=i; j<n; j++) {
//             if (v[i] * v[j] == n-2) {
//                 cout<<v[i]<<" "<<v[j]<<endl;
//                 return;
//             }
//         }
//     }
// }

void solvee() {
    int k;  cin>>k;

    set<int> s;
    for (int i=0; i<k; i++) {
        int ele;
        cin>>ele;
        s.insert(ele);
    }

    for (auto i : s) {

        if ((k-2) % i == 0) {
            int m = (k-2) / i;
            if (s.find(m) != s.end()) { 
                cout<<i<<" "<<m<<endl; 
                return; 
            } 
        } 
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        solvee();
    }
    return 0;
}