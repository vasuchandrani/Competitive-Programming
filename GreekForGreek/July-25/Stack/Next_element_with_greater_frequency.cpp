#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findGreater(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq;
        for (int x : arr)
            freq[x]++;

        vector<int> res(n, -1);
        stack<int> st; // stack of values, not indices

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && freq[arr[i]] >= freq[st.top()]) {
                st.pop();
            }

            if (!st.empty()) {
                res[i] = st.top();
            }

            st.push(arr[i]);
        }

        return res;
    }
};
