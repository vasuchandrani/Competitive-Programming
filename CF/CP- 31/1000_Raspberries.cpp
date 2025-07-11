#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int n, k;
        cin>>n>>k;
        int a[n]; 
        bool NoOperation = false;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            if (a[i] == k || a[i]%k == 0){
                NoOperation = true;
            }
        }

        int opr = INT_MAX;
        int count;
        if (NoOperation) {
            cout<<0<<endl;
        }
        else {
            if (k == 4) {
                vector<int> v;
                for (int i=0;i<n;i++) {
                    count = 0;
                    while ((a[i]+count)%2 != 0) {
                        count++;
                    } 
                    v.push_back(count);
                }
                sort(v.begin(), v.end());
                opr = v[0] + v[1];

                for (int i=0;i<n;i++) {
                    count = 0;
                    while (a[i]%k != 0) {
                        a[i]++;
                        count++;
                    }
                    opr = min(opr,count);
                }
                cout<<opr<<endl;
            }
            else {
                for (int i=0;i<n;i++) {
                    count = 0;
                    while (a[i]%k != 0) {
                        a[i]++;
                        count++;
                    }
                    opr = min(opr,count);
                }
                cout<<opr<<endl;
            }
        }
    }
    return 0;
}