#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve () {

    string s;
    cin>>s;
    int n = s.length();

    int two = 0;
    int three = 0;
    int sum = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == '2') 
            two++;

        if (s[i] == '3') 
            three++;

        sum += (s[i] - '0');
        sum = sum%9;
    }

    
    for (int i=0; i<=three; i++) {
        for (int j=0; j<=two; j++) {

            ll total_sum = sum;
            total_sum += j*2 + i*6;

            if (total_sum % 9 == 0) {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    
    cout<<"NO"<<endl;

}
int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
    return 0;
}



/*
bool checkDiff(ll diff, int two, int three) {

    if (diff == 0) {
        return true;
    }

    if (diff >= 6) {
        if (three == 0 && two < 3) {
            return false;
        } else if (three > 0) {
            diff -= 6;
            three--;
            return checkDiff(diff, two, three);
        } else if (two >= 3) {
            diff -= 6;
            two -= 3;
            return checkDiff(diff, two, three);
        }
    } else if (diff == 4) {
        if (two < 2) {
            return false;
        } else {
            two -= 2;
            diff -= 4;
            return checkDiff(diff, two, three);
        }
    } else {
        if (two > 0) {
            two--;
            diff -= 2;
            return checkDiff(diff, two, three);
        } else {
            return false;
        }
    }

    return false;
}

void solve() {
    ll num;
    cin>>num;

    if (num % 9 == 0) {
        cout<<"YES"<<endl;
        return;
    }

    ll nextNum = num + 9 - (num % 9);
    ll diff = nextNum - num;

    if (diff % 2 != 0) {
        diff += 9;
        if (diff % 2 != 0) {
            cout<<"NO"<<endl;
            return;
        }
    } 
    
        string s = to_string(num);
        ll size = s.length();

        int two = 0;
        int three = 0;

        for (int i=0; i<size; i++) {
            if(s[i] == '2') two++;
            if(s[i] == '3') three++;
        }

        bool yes = checkDiff(diff, two, three);

        if (yes) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
    return 0;
}
*/