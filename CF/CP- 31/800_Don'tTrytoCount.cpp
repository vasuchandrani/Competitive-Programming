#include<iostream>
#include<string>
using namespace std;

void subString (string x, string s, int m, int opr) {

    x += x;
    opr++;
    if (x.find(s) != string::npos) {
        cout<<opr<<endl;
        return;
    }
    else if (x.length() > m && opr > 2) {
        cout<<-1<<endl;
        return;
    }
    else {        
        subString(x,s,m,opr);
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string x, s;
        cin>>x>>s;

        if(x.find(s) != string::npos) {
            cout<<0<<endl;
        }
        else {
            subString(x,s,m,0);
        }
    }
    return 0;
}