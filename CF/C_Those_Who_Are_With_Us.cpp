#include<bits/stdc++.h>
using namespace std;

int solvee() {

    int n, m;
    cin>>n>>m;

    vector<int> row(n, 0);
    vector<int> col(m, 0);
    
    vector<vector<int>> a(n, vector<int>(m));

    int maxi = INT_MIN;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>a[i][j];

            if (a[i][j] == maxi) {
                row[i]++;
                col[j]++;
            }
            else if (a[i][j] > maxi) {
                row.clear();
                col.clear();
                maxi = a[i][j];

                row[i]++;
                col[j]++;
            }
        }
    }

    int maxRow = -1;
    int maxCol = -1;

    for (int i=0; i<n; i++) {
        maxRow = row[i] > maxRow ? i : maxRow;
    }
    
    for (int i=0; i<m; i++) {
        maxCol = row[i] > maxCol ? i : maxCol;   
    }

    bool flag = false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {

            if (a[i][j] == maxi) {
                if (i != maxRow && j != maxCol) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) break;
    }

    if (flag)   return maxi;

    return maxi-1;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}