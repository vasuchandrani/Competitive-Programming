#include<bits/stdc++.h>
using namespace std;

int solvee () {
    int n;  cin>>n;
    char curr;  cin>>curr;
    string s;   cin>>s;
    s = s + s;

    int i = 0; 
    int j = 0;
    int maxGap = 0;
    while (i < 2 *n && j < 2 *n) {
        while (s[i] != curr && i < 2 *n) {
            i++;
            j = i;
        } 
        // cout<<i<<" ";
        while (s[j] != 'g' && j < 2 *n) j++;
        // cout<<j<<endl;
        while (i < j) {
            if (s[i] == curr) {
                maxGap = max(maxGap, j - i);
            }
            i++;
        }
        i++;
        j++;
    }
    
    return maxGap;

}

int main () {
    int t;  cin>>t;
    while (t--) {
        cout<<solvee() <<endl;
    }
}