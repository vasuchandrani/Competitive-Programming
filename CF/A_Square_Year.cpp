#include<bits/stdc++.h>
using namespace std;

void solvee() {
    string s;   cin>>s;
    int num = stoi(s);

    int root = sqrt(num);

    if (root *root == num) {
        cout<<0<<" "<<root<<endl;
    }
    else {
        cout<<-1<<endl;
    }
}
int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }

    return 0;
}