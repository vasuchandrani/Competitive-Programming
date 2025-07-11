#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<climits>
using namespace std;
#define lli long long int 

int opr(string& last_two, string& num) {
    int x = last_two[0];
    int y = last_two[1];

    int count = 0;
    int j = num.length()-1;
    while (j > 0 && num[j] != y) {
        j--;
        count++;
    }
    int i = j - 1;
    while (i > 0 && num[i] != x) {
        i--;
        count++;
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        lli n;
        cin>>n;

        string num = to_string(n);

        vector<string> last_two = {"00", "25", "50", "75"};
        int ans = INT_MAX;
        
        for (auto digit : last_two) {
            int temp = opr(digit, num);
            ans = min(temp, ans);
        }
        cout<<ans<<endl;
    }
}