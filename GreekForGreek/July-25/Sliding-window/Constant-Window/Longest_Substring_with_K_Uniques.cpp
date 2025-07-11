#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    int longestKSubstr(string &s, int k) {
        
        int n = s.length();
        map<int, int> mp;
        
        int i = 0;
        int j = 0;
        int maxLen = -1;
        
        while (j < n) {
            
            mp[s[j]]++;
            // cout<<s[j]<<endl;
            
            if (mp.size() == k) {
                maxLen = max(maxLen, j - i +1);        
                // cout<<maxLen<<endl;
                
            }
            
            if (mp.size() > k) {
                while (mp.size() > k) {
                    mp[s[i]]--;
                    if (mp[s[i]] == 0) 
                        mp.erase(s[i]);
                    i++;
                }    
            }
            j++;
        }
        return maxLen;
    }
};