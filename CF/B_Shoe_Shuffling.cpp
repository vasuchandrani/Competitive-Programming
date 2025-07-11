#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solvee () {

    int n;  cin>>n;
    map<ll, int> mp;
    for (int i=0; i<n; i++) {
        ll ele; cin>>ele;
        mp[ele]++;
    }

    int curr_ptr = 0;
    vector<int> result(n);
    int i = 0;
    for (auto ele : mp) {

        if (ele.second == 1) {
            cout<<-1<<endl;
            return;
        }

        else {
            if (ele.second %2 == 0) {
                int size = ele.second;
                int last = size + curr_ptr;

                while (last > curr_ptr) {
                    result[i++] = last;
                    last--;
                }

                curr_ptr += size;
            }
            else {
                int size = ele.second;
                result[i++] = curr_ptr + size;
                curr_ptr++; size--;

                while (size > 0) {
                    result[i++] = curr_ptr;
                    curr_ptr++; size--;
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        cout<<result[i]<<" ";
    }cout<<endl;

}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }
}