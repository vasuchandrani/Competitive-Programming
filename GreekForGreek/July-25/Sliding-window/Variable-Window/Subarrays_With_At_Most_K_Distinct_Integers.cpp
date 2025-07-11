#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        
        
        int n = arr.size();
        
        map<int, int> mp;
        int i = 0;
        int j = 0;
        
        int cnt = 0;
        while (j < n) {
            
            mp[arr[j]]++;
            
            while (mp.size() > k) {
                mp[arr[i]]--;
                if (mp[arr[i]] == 0) {
                    mp.erase(arr[i]);
                }
                i++;
            }     
            
            cnt += j - i + 1;
                
            j++;
        }
        return cnt;
    }
};