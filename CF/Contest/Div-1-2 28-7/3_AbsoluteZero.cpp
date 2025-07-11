#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void solveeee(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        
    vector<int> opr;
    while (*max_element(a.begin(), a.end()) > 0){
        if (opr.size() >= 40) {
            cout << -1 << endl;
            return;
        }
 
        long long int max = *max_element(a.begin(), a.end());
        long long int min = *min_element(a.begin(), a.end());
        long long int x = (max + min) / 2;
        opr.push_back(x);
 
        for (int i = 0; i < n; i++) {
            a[i] = abs(a[i] - x);
        }
    }
    cout<<opr.size()<<endl;
    for(int op : opr) {
        cout << op << " ";
    }cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solveeee();
    }
    return 0;
}