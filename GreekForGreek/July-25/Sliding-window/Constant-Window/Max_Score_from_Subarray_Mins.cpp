#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSum(vector<int> &arr) {
        
        int maxSum = INT_MIN;
        int n = arr.size();
        int i = 0;
        int j = 0;    
    
        int win = 1;
        int sum = 0;
        while (j < n) {
            
            sum += arr[j];
            
            if (win == 2) {
                maxSum = max(maxSum, sum);
                
                sum -= arr[i];
                i++;
                win--;
            }
            j++;
            win++;
        }
        return maxSum;
    }
};