#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printPermutations(vector<int>& arr) {
    // Sort the array to ensure that permutations start with the smallest lexicographical order
    sort(arr.begin(), arr.end());
    int cnt = 0;
    do {
        cnt++;
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
}

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    cout << "All permutations of the sequence are: " << endl;
    printPermutations(arr);

    return 0;
}
