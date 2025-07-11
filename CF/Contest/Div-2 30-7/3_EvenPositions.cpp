#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        s[0] = '(';
        for(int i=2;i<n;i += 2){
            if(s[i-1] == '('){
                s[i] = ')';
                continue;
            }
            else{
                s[i] = '(';
            }
        }
        int cost = 0;
        int x = 1;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                for(int j=x;j<n;j++){
                    if(s[j] == ')'){
                        cost += j - i;
                        x = j+1;
                        break;
                    }
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}