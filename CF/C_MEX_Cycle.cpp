#include <bits/stdc++.h>
using namespace std;

int MEX(const set<int>& s) {
    int mex = 0;
    while (s.find(mex) != s.end()) {
        mex++;
    }
    return mex;
}

vector<int> resultValue(int n, int x, int y) {

    vector<int> temp(n, -1);
    vector<set<int>> friends(n);

    for (int i=0; i<n; i++) {

        friends[i].insert((i + 1) % n);
        friends[i].insert((i - 1 + n) % n);
    }

    x--; y--;
    friends[x].insert(y);
    friends[y].insert(x);

    for (int i=0; i<n; i++) {
        
        set<int> neighborValues;
        for (int friendIndex : friends[i]) {
            if (temp[friendIndex] != -1) {
                neighborValues.insert(temp[friendIndex]);
            }
        }
        temp[i] = MEX(neighborValues);
    }

    return temp;
}

int main() {

    int t;
    cin>>t;

    while (t--) {
        int n, x, y;
        cin>>n>>x>>y;

        vector<int> result = resultValue(n, x, y);

        for (int i : result) {
            cout<<i<<" ";
        }cout<<endl;
    }

    return 0;
}