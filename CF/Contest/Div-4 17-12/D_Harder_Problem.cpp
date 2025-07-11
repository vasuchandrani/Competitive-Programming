#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int, int> frequency;
    int max_freq = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        // Insert a[i] into b[i] and update frequency
        b[i] = a[i];
        frequency[a[i]]++;
        max_freq = max(max_freq, frequency[a[i]]);

        // Maintain mode property
        if (frequency[a[i]] < max_freq) {
            for (int j = 1; j <= n; ++j) {
                if (frequency[j] == max_freq) {
                    b[i] = j;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
