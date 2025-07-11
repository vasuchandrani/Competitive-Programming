#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int freq[n+1] = {0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        bool AliceWin = false;
        for(int i=0;i<(n+1);i++){
            if(freq[i] != 0 && freq[i]%2 != 0){
                AliceWin = true;
                break;
            }
        }

        if(AliceWin) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
