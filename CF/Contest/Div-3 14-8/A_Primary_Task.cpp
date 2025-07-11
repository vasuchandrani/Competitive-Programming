#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a;
        cin>>a;

        string num = to_string(a);
        
        bool isme_10_hai = false;
        if(num[0] == '1' && num[1] == '0') {
            isme_10_hai = true;
        }
        

        if(isme_10_hai){
            if (num[2] == '0') {
                cout<<"NO"<<endl;
            }

            else if (num[2] == '1' && num.length() == 3) {
                cout<<"NO"<<endl;
            }

            else if (num.length() == 2) {
                cout<<"NO"<<endl;
            }

            else {
                cout<<"YES"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
}
