#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_petals_bouquet(int n, long long m, vector<int>& petals) {
    sort(petals.begin(), petals.end());

    int total_petals = 0;
    long long current_cost = 0;

    for (int i = 0; i < n; ++i) {
        // Check if adding the current flower exceeds the budget
        if (current_cost + petals[i] <= m) {
            // Check if the difference in petals with the previously added flower is at most one
            if (i == 0 || petals[i] - petals[i - 1] <= 1) {
                total_petals += petals[i];
                current_cost += petals[i];
            } else {
                break; // Stop adding flowers if the difference exceeds one
            }
        } else {
            break; // Stop adding flowers if the budget is exceeded
        }
    }

    return total_petals;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long m;
        cin>>n>>m;

        vector<int> petals(n);
        for (int i = 0; i < n; ++i) {
            cin >> petals[i];
        }

        cout << max_petals_bouquet(n, m, petals) << endl;
    }

    return 0;
}
