#include<bits/stdc++.h>
using namespace std;

void sortTheArry(vector<int> &v, int s, int e) {
    // quick-sort

    // base-case
    if (s >= e) {
        return;
    }

    int pivot = v[s];
    int i = s + 1;
    int j = e;

    while (i <= j) {

        while (pivot > v[i]) {
            i++;
        }
        while (pivot < v[j]) {
            j--;
        }
        if (i <= j) {
            swap(v[i++],v[j--]);
        }
    }

    swap(v[s], v[j]);

    sortTheArry(v, s, j-1);
    sortTheArry(v, j+1, e);
}

int solve() {
    int n;  cin>>n;

    vector<int> v(2*n);
    for(int i=0; i<2*n; i++) {
        cin>>v[i];
    }

    // sort(v.begin(), v.end());
    sortTheArry(v, 0, 2*n-1);

    int sum = 0;
    for (int i=2*n-1; i>0; i-=2) {
        // cout<<v[i]<<" "<<v[i-1]<<endl
        sum += min(v[i], v[i-1]);
    }

    return sum;
}

int main () {
    int t;  cin>>t;

    while (t--) {
        int score = solve();
        cout<<score<<endl;
    }
}